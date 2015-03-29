#include<iostream>
#include<fstream>
#include<cstdlib>
#include "bmi.h"
using namespace std;
int main(){
	Bmi bmi1;
	
	int height, weight;
	float value;
	string category;
	ifstream inFile("file.in",ios::in); 
	if(!inFile){
		cout<<"Failed opening"<<endl;
		exit(1);
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cout<<"Failed opening"<<endl;
		exit(1);
	}
	while(inFile>>height>>weight){
		if(height==0||weight==0)
			break;
		bmi1.setHeight(height);
		bmi1.setWeight(weight);
		value=bmi1.bmi();
		category=bmi1.category(value);
		outFile<<value<<"\t"<<category<<endl;
	}
	return 0;
}

