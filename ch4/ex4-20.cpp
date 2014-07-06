#include <iostream>

using namespace std;

int main()
{
  int passes = 0 ;
  int failure = 0;
  int studentCounter = 1;
  int result;
  bool input = false;

  while (studentCounter <= 10)
    {
      cout << "enter result (1 = pass , 2 = fail): ";
      cin >> result;

      if(result == 1)
	{
	  input = true;
	}
      else if(result == 2)
	{
	  input = true;
	}
      while (input == false)
	{
	  cout << "wrong input"
	       << "\t enter valid input: ";
	  cin >> result;
	  if(result == 1)
	    {
	      input = true;
	    }
	  else if(result == 2)
	    {
	      input = true;
	    }
	}
      
      if(result == 1)
	{
	  passes += 1;      
	}else
	failure +=1;
      
      studentCounter++;
      input = false;
    }
  cout << "failur: " << failure << "passe: " << passes << endl;


  return 0;
}
