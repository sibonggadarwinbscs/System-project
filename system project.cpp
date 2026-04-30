#include <iostream>
using namespace std;

//process
 float gradecalculator(float quiz,float act,float pt1,float pt2,float pt3,float pt4, float midexam,float finalexam){
 	//weighted mean
	float writen = ((quiz+act)/200.0)*100;
 	float performancetask= ((pt1+pt2+pt3+pt4)/400.0)*100;
    float exam= ((finalexam+midexam)/200.0)*100;
    
	
    float grade= writen*0.25+performancetask*0.45+exam*0.30;
    
 	return grade;
 	
 }

int main(){
	// first project
	float quiz,pt1,pt2,pt3,pt4,midexam, finalexam,act;
	//input
	cout<<"Enter your quiz score: ";
	cin>> quiz;
	
	cout<<"Enter your activity score: ";
	cin>> act;
	
	cout<<"Enter your performance task 1 score: ";
	cin>> pt1;
	
	cout<<"Enter your performance task 2 score: ";
	cin>> pt2;
	
	cout<<"Enter your performance task 3 score: ";
	cin>> pt3;
	
	cout<<"Enter your performance task 4 score: ";
	cin>> pt4;
	
	cout<<"Enter your midterm exams score: ";
	cin>> midexam;
	
	cout<<"Enter your final exams score: ";
	cin>> finalexam;

	float grade = gradecalculator( quiz, act, pt1, pt2, pt3, pt4, midexam, finalexam);
	
	cout<< "grade: " << grade;
	
	return 0;
} 
 	

