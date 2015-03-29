#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include "bmi.h"

float Bmi::bmi(){
	float value;
	value=Weight/(Height/100*Height/100);
	return value;
}
string Bmi::category(float value){
	if(value<15)
		return "Very severely underweight";
	if(value>=15 && value<16)
		return "Severely underweight";
	if(value>=16 && value<18.5)
		return "Underweight";
	if(value>=18.5 && value<25)
		return "Normal";
	if(value>=23 && value<30)
		return "Overweight";
	if(value>=30 && value<35)
		return "Obese Class I(Moderately obese)";
	if(value>=35 && value<40)
		return "Obese Class II(Severely obese)";
	if(value>=40)
		return "Obese Class III(Very severely obese)";
}
void Bmi::setHeight(int height){
	Height=height;
}
void Bmi::setWeight(int weight){
	Weight=weight;
}
int Bmi::getHeight(){
	return Height;
}
int Bmi::getWeight(){
	return Weight;
}

