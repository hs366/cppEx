#include<iostream>
//#include<cstdio>
#include "5-9.h"

using namespace std;


GradeBook::GradeBook(string name){
  setCourseName(name);
  aGrade = 0;
  bGrade = 0;
  cGrade = 0;
  dGrade = 0;
  fGrade = 0;
}

void GradeBook::setCourseName(string name){
  if(name.length() <= 25){
  courseName = name;
  //this-> name;
}else{
    courseName = name.substr(0, 25);
  cout << "Name \"" << name << "\" exceeded the max 25 charecters" << endl;
  //cout << name.substr(0, 25) <<  
  }
}

string GradeBook::getCourseName(){
  return courseName;
}

void GradeBook::displayMessage(){
  cout << "welcome to the course "<< getCourseName() << endl;
}
  void GradeBook::inputGrades(){
    int grade;
    cout << "Enter the letter grade" << endl
	 << "Enter EOF to exit" << endl;

    while( (grade = cin.get() ) != EOF ){
      switch(grade)
	{
	case'A':
	case'a':
	 ++aGrade;
	  break;
	
	case 'B':
	case 'b':
	  bGrade++;
	  break;

	case 'C':
	case 'c':
	  cGrade++;
	  break;

	case 'D':
	case 'd':
	  dGrade++;
	  break;

	case 'F':
	case 'f':
	  fGrade++;
	  break;
      
	case '\n':
	case '\t':
	case ' ':
	   break;
      
	default:
	  cout << "Incorrect letter entered"
	       << "Please try again: " << endl;
	  break;
	}
    }
  }


void GradeBook::displayGradeReport(){
  cout << "\n \nNumber of student with respective greades: "
       << "\nA: " << aGrade
       << "\nB: " << bGrade
       << "\nC: " << cGrade
       << "\nD: " << dGrade
       << "\nF: " << fGrade
       << endl;
    }
