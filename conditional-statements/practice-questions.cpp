#include<iostream>
using namespace std;


// Print the largest of 2 numbers
int main(){
  int a, b;
  cout <<"enter a : ";
  cin >> a;

  cout <<"enter b : ";
  cin >> b;

  if(a >= b){
    cout << "a is larger : " << endl;
  }
  else{
    cout <<"b is larger : "<< endl;
  }

  // print if a number Odd or Even
  int num;
  cout <<"enter a number : ";
  cin >> num;
  if(num % 2 == 0){
      cout<<"number is even : "<< endl;
  }
  else{
      cout<<"number is odd : "<< endl;
  }
 return 0;
}