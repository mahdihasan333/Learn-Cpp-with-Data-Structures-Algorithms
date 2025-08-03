#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    int age = 25;
    int marks = -90;
    char grade = 'A';
    bool isAdult = true;
    float cgpa = 8.9;
    double price = 99.99;
    
    
    cout<<age<<"--"<<marks<<"--"<<grade<<"--"<<isAdult<<"--"<<cgpa<<"--"<<price<<endl;
    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of char = "<<sizeof(char)<<endl;
    cout<<"size of bool = "<<sizeof(bool)<<endl;
    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of float = "<<sizeof(float)<<endl;
    
    // comparison float vs double
    float PI = 3.14159265359;
    double PI2 = 3.14159265359;
    cout<<setprecision(12)<<"PI = "<<PI<<endl;
    cout<<setprecision(12)<<"PI2 = "<<PI2<<endl;
  return 0;
}