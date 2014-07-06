#include <iostream>

using namespace std;

int main(){
  
  int counter{1};
  double number;
  double great{0};
  double greatest{0};
  
  while (counter <= 10)
    {
      cout << "enter your number: ";
      cin >> number ;
      
      if ((number > great) && (number > greatest))
	{
	  great = greatest;
	  greatest = number;
	}
      else if (number < greatest && number > great)
	{
	  great = number;
	}
      
      counter++;
    }

  cout << "Great is: " << great << endl;
  cout << "Greatest is: " << greatest << endl;

  return 0;
}
