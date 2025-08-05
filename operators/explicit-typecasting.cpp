#include<iostream>
using namespace std;


int main(){
  cout << (int)('A') << endl;       // 65
  
  float PI = 3.14;
  cout << (int)(PI) << endl;        // 3
  
  cout <<((float)10/3) << endl;     // 3.33333
  
  cout << (char)('A' + 1) << endl;  // B
  cout << (char)('B' + 1) << endl;  // C
  return 0;
}