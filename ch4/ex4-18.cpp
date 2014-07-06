#include <iostream>
using namespace std;

int main()
{
  int n{1};
   cout << n << "\t" << "n*10" << "\t" << "n*100" << "\t" << "n*1000" << endl;
  while(n <= 5)
    {
      cout << n << "\t" << (n * 10) << "\t" << n * 100 << "\t" << n * 1000 << endl; 

      n++;
    }



  return 0;
}
