#ifndef _5_9_h_
#define _5_9_h_

#include <string>
using namespace std;

class GradeBook{
 public:
  
GradeBook(string);
string getCourseName();
void setCourseName(string);
void displayMessage();
void inputGrades();
void displayGradeReport();
 private:
string courseName;
  int aGrade;
  int bGrade;
  int cGrade;
  int dGrade;
  int fGrade;

};


#endif
