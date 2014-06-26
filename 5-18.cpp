//test a cpp program 

#include <iostream>

using namespace std;

int main(){
  
  cout << boolalpha << " logical and (&&)" 
       << "\n false && false" << "\t" << (false && false)
       << "\n false && true" << "\t" << (false && true)
       << "\n true && false" << "\t" << (true && false)
       << "\n true && true" << "\t" << (true && true) << endl;
  
  cout << "\n logical or (||)" 
       << "\n false || false" << "\t" << (false || false)
       << "\n false || true" << "\t" << (false || true)
       << "\n true || false" << "\t" << (true || false)
       << "\n true || true" << "\t" << (true || true) << endl;

cout << noboolalpha << " logical and (&&)" 
       << "\n false && false" << "\t" << (false && false)
       << "\n false && true" << "\t" << (false && true)
       << "\n true && false" << "\t" << (true && false)
       << "\n true && true" << "\t" << (true && true) << endl;
  
  cout << "\n logical or (||)" 
       << "\n false || false" << "\t" << (false || false)
       << "\n false || true" << "\t" << (false || true)
       << "\n true || false" << "\t" << (true || false)
       << "\n true || true" << "\t" << (true || true) << endl;

  cout << "Logical NOT (!)" 
       << "\n !false" << "\t" << (!false)
       << boolalpha << "\n !false" << "\t" << (!false)
       << "\n !true" << "\t" << (!true) 
       << noboolalpha << "\n !true" << "\t" << (!true) << endl;


  return 0;
}
