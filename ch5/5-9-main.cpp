#include "5-9.h"

#include <iostream>

using namespace std;

int main(){

  GradeBook myGradeBook("TDDD33 Programing in C++");
  //  cout <<  myGradeBook.displayMessage() << endl;  // I have a problem here
  myGradeBook.displayMessage();
  myGradeBook.inputGrades();
  myGradeBook.displayGradeReport();





  return 0;
}
