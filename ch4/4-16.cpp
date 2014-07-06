#include <iostream>

using namespace std;


int main(){
  int passes{0};
  int failure{0};
  int studentCounter{1};
  int result{0};

  int c;
  c = 5;
  cout << c << endl;
  cout << c++ << endl;
  cout << c << endl;
  cout << endl;
  c=5;
  cout << c << endl;
  cout << ++c << endl;
  cout << c << endl;





  while(studentCounter <= 10){
    cout << "Enter pass = 1 or fail = 2 " <<endl ;
    cin >> result ;
    if(result==1)
      {
	passes++ ;
      }else
      {
	failure++ ;
      }
    studentCounter++ ;
  }
  cout << "passes are : " << passes << " \nfailures are : " << failure << endl ;

}
