#include<iostream>
using namespace std;


int main(){
  int age;  // garbage value
  cout<<"Enter your age: ";
  cin>>age;
  cout<<"Your age is "<<age<<endl;

  //* Sum of a & b
  int a;
  int b;

  //input a
  cout<<"enter a: ";
  cin>>a;

  //input b
  cout<<"enter b: ";
  cin>>b;

  // calculate sum
  int sum = a + b;
  int prod = a + b;
  cout<<"Sum of a & b is "<<sum<<endl;
  cout<<"prod "<<prod<<endl;
  return 0;
}