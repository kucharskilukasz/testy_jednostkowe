#include <iostream>
#include <algorithm>
using namespace std;

int* sortArray(int array[], int size){
	sort(array,array+size);
}

int* reverseArray(int array[], int size){
	int tempArray[size];
	for(int i=0;i<size;i++)
		tempArray[i]=array[size-1-i];
	return tempArray;
}
