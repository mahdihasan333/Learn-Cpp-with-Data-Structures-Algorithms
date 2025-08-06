#include<iostream>
using namespace std;


int main(){
  int a = 3;
  // a = a + 1;    // a++
  // a = a - 1;    // a--

  // post   ===> use and then update
  a++;    // 4
  cout <<"a = " << a <<endl;
  a--;    // 3
  cout <<"a = " << a <<endl;

  // pre    ===> update and then use
  ++a;    // 4
  cout <<"a = " << a <<endl;
  --a;    // 3
  cout <<"a = " << a <<endl;

  // ++
  int c = 3;
  int d = c++;
  cout <<"c = " << c <<endl;    // 4
  cout <<"d = " << d <<endl;    // 3

  
  // --
  int e = 3;
  int f = e--;
  cout <<"e = " << e <<endl;    // 2
  cout <<"f = " << f <<endl;    // 3
  
  
   // --
  int g = 3;
  int h = --g;
  cout <<"g = " << g <<endl;    // 2
  cout <<"h = " << h <<endl;    // 2
  return 0;
}


