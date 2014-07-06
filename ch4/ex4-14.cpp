/*
 * excercise 4-14 page 145
 *
 *
 *
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int accountNumber{};
  double beginningBalance{0};
  double totalCharges{0};
  double totalCredits{0};
  double creditLimit{0};
  double newBalance{0};

  cout << "\n Entere account number (or -1 to quit): " ;
  cin >> accountNumber ;
  
  while(accountNumber != -1)
    {
      cout << "Enter beginning balance: " ;
      cin >> beginningBalance;
      cout << "Enter total charges: ";
      cin >> totalCharges;
      cout << "Enter total credits: ";
      cin >> totalCredits;
      cout << "Enter credit limit: ";
      cin >> creditLimit;

      newBalance = (beginningBalance + totalCharges - totalCredits);

      if(newBalance > creditLimit)
	{
	  cout << "New balance is: " << newBalance << endl;
	  cout << "Account: " << accountNumber << endl;
	  cout << "Credit limit: " << creditLimit << endl;
	  cout << "Balance: " << newBalance  << endl;
	  cout << " \"Credit Limit Exceeded.\"";
	}
      else
	{
	  cout << " New balance is: " << newBalance << endl;
	}
      
      cout << "\n Entere account number (or -1 to quit): " ;
      cin >> accountNumber ;
    }

  
  
  
  return 0;
}

