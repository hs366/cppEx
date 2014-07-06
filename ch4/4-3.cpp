#include <iostream>

using namespace std;

int main(){

  int x{1};
  int sum{0};

  while(x <= 10){
    sum += x ;
    cout << sum << endl;
    x++ ;
    
  }
  cout << sum <<  endl;

}




