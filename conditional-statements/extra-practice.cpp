// 1st
#include<iostream>
using namespace std;

int main(){
 int number;
  cout<<"Enter a number: ";
  cin>>number;

  if(number > 1){
    cout <<"Positive number";
  }else if(number == 0){
    cout <<"zero number";
  }else{
    cout <<"Negative number";
  }
 return 0;
}

// 2
#include<iostream>
using namespace std;

int main(){
 int year;
  cout<<"Enter a year: ";
  cin>>year;

  if(year % 4 == 400){
    cout << year <<" is leap year \n";
  }else if(year % 4 == 100){
    cout << year <<" is not a leap year \n";
  }else if(year % 4 == 0){
    cout << year <<" is leap year \n";
  }
  else{
    cout << year <<" is not a leap year \n";
  }
 return 0;
}

// 3
#include<iostream>
using namespace std;

int main(){
  int a=63, b=36;
  bool x=(a<b)?true:false;
  int y=(a>b)?a:b;
  cout<<x<<","<<y<<endl;
 return 0;
}

// 4
#include<iostream>
using namespace std;

int main(){
  int a = 5;

  if(++a * 5 <= 25){
    cout<<"Hello\n";
  }
  else{
    cout<<"Bye\n";      // Bye
  }
  
 return 0;
}

// 5
#include<iostream>
using namespace std;

int main(){
 int n;
 cout << "Enter a digit number : ";
  cin >> n;

  int num = n;    // creating a copy

  int gig1 = num % 10;
  num /= 10;

  int dig2 = num % 10;
  num /= 10;

  int dig3 = num;

  int cubeSum = gig1*gig1*gig1 + dig2*dig2*dig2 + dig3*dig3*dig3;


  if(cubeSum == n){
    cout << n << " is an Armstrong number \n";
  }
  else{
    cout << n << " is not an Armstrong number \n";
  }

 return 0;
}
