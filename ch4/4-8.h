#ifndef _3e8_
#define _3e8_

#include <string>

using namespace std;

class GradeBook{
 public:
  GradeBook(string);
  void setCourseName(string);
  string getCourseName();
  void displayMessage();
  void determineClassAverage();
  
 private:
  string courseName;
  
};

#endif
