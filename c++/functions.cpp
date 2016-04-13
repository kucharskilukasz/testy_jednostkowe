#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

double add(double x, double y){
	return x+y;
}

double substract(double x, double y){
	return x-y;
}

double divide(double x, double y){
	return x/y;
}

double multiply(double x,double y){
	return x*y;
}
double power(double x, double y){
	int mnoznik = x;
	for(int i=1;i<y;i++){
		x=x*mnoznik;
	}
	return x;
}
bool isPrime(int x){
	if (x <=1)
		return false;
	else if (x == 2)
		return true;
	else if (x%2 == 0)
		return false;
	else{
		for(int i=2; i<sqrt(x);i++){
			if(x%i == 0 ){
				return false;
			}
		}
		return true;
	 }
}

int* sortArray(int array[], int size){
	sort(array,array+size);
}

int* reverseArray(int array[], int size){
	int tempArray[size];
	for(int i=0;i<size;i++)
		tempArray[i]=array[size-1-i];
	return tempArray;
}

vector<int> reverseVector(vector<int> dane){
	vector<int> tempDane;
	for(int i=0;i<dane.size();i++)
		tempDane.push_back(dane.at(dane.size()-1-i));
	return tempDane;
}

vector<int> get3FirstElementFromVector(vector<int> dane){
	vector<int> tempDane;
	tempDane.push_back(dane.at(0));
	tempDane.push_back(dane.at(1));
	tempDane.push_back(dane.at(2));
	return tempDane;
}

vector<int> addTwoVectors(vector<vector<int> > dane){
	vector<int> tempDane(dane.at(0));
	for(int i=0;i<dane.at(1).size();i++)
		tempDane.push_back(dane.at(1).at(i));
	return tempDane;
}
