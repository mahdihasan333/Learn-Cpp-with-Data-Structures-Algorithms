#include<iostream>
using namespace std;


int main(){
  // && -> and
 cout << ((3 < 5) && (10 > 5)) << endl;  // true -> 1
 cout << ((3 < 5) && (10 == 5)) << endl;  // false -> 0

  // || -> or
 cout << ((3 < 5) || (10 == 5)) << endl;  // true -> 1
 cout << ((3 == 5) || (10 == 5)) << endl;  // false -> 0

  // ! -> not
  cout << !(3 == 5) << endl;  // true -> 1
  cout << !(3 != 5) << endl;  // false -> 0
  cout << !(3 > 5) << endl;  // true -> 1
 return 0;
}