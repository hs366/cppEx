/*
 *
 *
 *
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double sale;
  double salary;
  double  commission ;
  
  cout << "Enter sales in dollars (-1 to end): ";
  cin >> sale;

  while(sale != -1)
    {
       commission = (sale * 9) / 100;
       salary = 200 + commission;

       cout << "salari is: $" << setprecision(2) << fixed << salary  << endl; 
      

      cout << "Enter sales in dollars (-1 to end): ";
      cin >> sale;      
    }









  return 0;
}
