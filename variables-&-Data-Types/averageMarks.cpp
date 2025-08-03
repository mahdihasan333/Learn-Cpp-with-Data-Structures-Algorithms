#include<iostream>
using namespace std;


int main(){
  float english;
  float bangla;
  float math;

  cout<<"Enter your English mark: ";
  cin>>english;

  cout<<"Enter your Bangla mark: ";
  cin>>bangla;

  cout<<"Enter your Math mark: ";
  cin>>math;

  int average = (english + bangla + math) / 3;
  cout<<"Your average mark is: "<<average<<endl;
  
  return 0;
}