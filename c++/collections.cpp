#include <vector>
using namespace std;
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
