/*
 * exercise 4-13. page 145.
 * miles
 * gallons
 * trip
 * enter miles driven by user
 * if it's not -1 countinu and store the input if it's -1 exit.
 * entere gallons and store the input 
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  int totalMiles = 0;
  int totalGallons = 0;
  int miles;
  int gallons;
 
  cout << "\nEnter miles driven (-1 to quit): ";
  cin >> miles; 

  //we can't use cin.get() becuase it takes only one charecter.
  
  while( miles != -1 )
    {
      cout << "Enter gallons used: ";
      cin >> gallons; 
 
      totalMiles += miles;
      totalGallons += gallons;
 
      double thisMPG;
      double totalMPG;
 
      thisMPG = static_cast< double > ( miles ) / gallons;
      totalMPG = static_cast< double > ( totalMiles ) / totalGallons;
 
      cout << "MPG this trip: " << setprecision( 6 ) << fixed
	   << thisMPG << endl;
      cout << "Total MPG: " << totalMPG << endl;
 
      cout << "\nEnter miles driven (-1 to quit): ";
      cin >> miles;

    }
  return 0;
}
