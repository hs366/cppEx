#include "4-8.h"
#include <iostream>
using namespace std;


GradeBook::GradeBook(string name)
{
  setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
  if(name.length() <= 25 )
    {
      courseName = name;
    }else
    {
      courseName = name.substr(0, 25);
      cout << name << endl;
    }
}

string GradeBook::getCourseName()
{
  return courseName;
}

void GradeBook::displayMessage()
{
  cout << "Welcome to course of " << getCourseName() << endl;
}

void GradeBook::determineClassAverage()
{
  float average{0};
  int counter{1};
  int grade{0};
  int total{0};

  while(counter <= 10)
    {
      cout << "enter grade: ";
      cin >> grade ;
      total += grade ;
      counter++ ; 
    }
  average = total /10 ;
  cout << average ;



}
