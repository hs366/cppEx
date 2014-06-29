#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main(){
  float principle{1000.0};
  float rate{.05};
  float amount{};

  cout << " Year" << setw(21) << "Amount on deposit" << endl;
  cout << fixed << setprecision(2);
  
  for(int year=1; year <=10; year++){
    amount = principle * pow(1.0 + rate, year);

    cout << setw(4) <<year << setw(21) << amount  << endl;
}
  int y = 1;
  do {
    cout << y << " " ;
    //  int  y = 1 ;
  y++;

  }while (y == 10);
  cout << endl;  
  


}
