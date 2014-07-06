#include <iostream>
using namespace std;

int main()
{
  int y;
  int x = 1;
  int total = 0;
  
  while(x <= 10)
    {
      y = x * x;
      cout << "out " << y << endl;
      total += y;         // chera total meghdare ghabli ro negah nemidare e.c
                          // total aval 1 boode + 4 mishe = 5 bayad bashe vali
                          // ..?
      x++;
    }
  
  cout << "this is total: " << total <<  endl;
  
  return 0;
}

