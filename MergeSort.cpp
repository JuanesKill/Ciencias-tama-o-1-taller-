#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

double PCFreq = 0.0;
__int64 CounterStart = 0;
int N;

void StartCounter(){
	LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
    cout << "QueryPerformanceFrequency failed!\n";

    PCFreq = double(li.QuadPart);

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double GetCounter(){
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return double(li.QuadPart-CounterStart)/PCFreq;
}

void MergeList(int a[], int start1, int end1, int start2, int end2){
	int finalStart, finalEnd, indexC, i;
	int result[N];
	finalStart = start1;
	finalEnd = end2;
	indexC = 1;
	while (start1 <= end1 && start2 <= end2){
		if (a[start1] < a[start2]){
			result[indexC] = a[start1];
			start1 = start1 + 1;
		}
		else{
			result[indexC] = a[start2];
			start2 = start2 + 1;
		}
		indexC = indexC + 1;
	}
	if (start1 <= end1){
		for (i=start1; i<=end1; i++){
			result[indexC] = a[i];
			indexC = indexC + 1;
		}
	}
	else{
		for (i=start2; i<=end2; i++){
			result[indexC] = a[i];
			indexC = indexC + 1;
		}
	}
	indexC = 1;
	for (i=finalStart; i<=finalEnd; i++){
		a[i] = result[indexC];
		indexC = indexC + 1;
	}
}

void MergeSort(int a[], int first, int last){
	int middle;
	if (first < last){
		middle = (first + last)/2;
		MergeSort(a, first, middle);
		MergeSort(a, middle+1, last);
		MergeList(a, first, middle, middle+1, last);
	}
}

int main(){
	cout<<"Ingresa el tamanyo del array"<<endl;
    cin >> N;
    int a[N];
	srand(time(NULL));
    for (int i=0; i<N; i++) {
        a[i] = rand() % 200;
    }
    StartCounter();
	MergeSort(a, 0, N-1);
	cout << GetCounter() <<"\n";
	for (int j=0; j<N; j++){
		cout<<a[j]<<" ";
	}
}

