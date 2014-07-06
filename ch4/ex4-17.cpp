/*
 *
 *
 */

#include <iostream>

using namespace std;

int main()
{
  int counter{1};
  double number;
  double largest{0};

  cout << "enter first number: ";
  cin >> largest;

  while(++counter < 10)
    {
      cout << "Enter a number: ";
      cin >> number;

      if(number > largest)
        largest = number;
      //cout << largest << endl;
      // counter++;
    }
  cout << "Largest number is: " << largest << endl;

  return 0;
}
