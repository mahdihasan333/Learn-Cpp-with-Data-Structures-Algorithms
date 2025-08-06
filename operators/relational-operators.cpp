#include<iostream>
using namespace std;


int main(){
  // Relational Operators  -> T / F
  int a = 3;
  int b = 5;
  cout << (a > b) << endl;  // False -> 0
  cout << (a < b) << endl;  // True -> 1

  int c = 3;
  int d = 3;
  cout << (c >= d) << endl;  // True -> 1
  cout << (c <= d) << endl;  // True -> 1
  
  int e = 3;
  int f = 3;
  cout << (e == e) << endl;  // True -> 1
  cout << (f != f) << endl;  // False -> 0
  return 0;
}