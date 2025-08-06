#include<iostream>
using namespace std;


int main(){
  int age;
  cout<<"Enter your age: ";
  cin>>age;

  if(age>=18){
    cout<<"You are eligible to vote."<<endl;
  }
  if(age >= 45){
      cout << "contest for elections" <<endl;
  }
  else{
    cout<<"You are not eligible to vote."<<endl;
  }


  // marks
  float marks;
  cout<<"Enter your marks: ";
  cin>>marks;

  if(marks>=30){
    cout<<"Pass"<<endl;
  }
  else{
    cout<<"Fail"<<endl;
  }
 return 0;
}