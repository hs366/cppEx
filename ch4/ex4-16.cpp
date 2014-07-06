#include <iostream>
using namespace std;

int main()
{
  double time;
  double salary;
  double rate;

  cout << "Enter hours worked: " ;
  cin >> time ;
  
  while(time != -1)
    {
      cout << "Enter hourly rate for employee($00.00) :";
      cin >> rate;
      if(time <= 40)
	{
	  salary = time * rate;
	  cout << "Salary is : $" << salary << endl; 
	}
      else
	{
	  salary = ((time - 40) * rate *1.5) + ( rate * 40);
	  
	  cout << "Salary is : $" << salary << endl; 
	}

 cout << "Enter hours worked: " ;
  cin >> time ;
    }


  return 0;

}
