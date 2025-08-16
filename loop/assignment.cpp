#include <iostream>
using namespace std;

int main() {
    // Question1:WAP to find the Factorial of a number entered by the user.
    // int n = 6;
    // int fact = 1;
    // for(int i = 1; i <= n; i++){
    //     fact *= i;
    // }
    // cout << "factorial of " << n << " = " << fact << "\n";
    
    // Question2:WAP to print the multiplication table of a number,entered by the user.
    // int n = 5;
    // for(int i = 1; i <= 10; i++){
    //     cout << n * i << "\n";
    // }
    
    // Question3:WAP to input a number and check whether the number is an Armstrong number or not.
    // int n = 371;
    // int num = n;
    // int cubeSum = 0;
    
    // while(n > 0){
    //     int lastDig = num % 10;
    //     cubeSum += lastDig + lastDig + lastDig;
    //     num /= 10;
    // }
    // if(n == cubeSum){
    //     cout << "Armstrong number \n";
    // }else{
    //     cout << "NOT an Armstrong number \n";
    // }
    
    // Question4: For a positive N, WAP that prints all the prime numbers from 2 to N.(AssumeN>=2)
    // int n = 100;
    // for(int i = 2; i <= n; i++){
    //     int curr = i;
    //     bool isPrime = true;
        
    //     for(int j = 2; j * j <= i; j++){
    //         if(curr % j == 0){
    //             isPrime = false;
    //         }
    //     }
        
    //     if(isPrime){
    //         cout << curr << "\n";
    //     }
    // }
    // cout << endl;
    
    // Question5: For a positive N, WAP that prints the first N Fibonacci numbers.(Assume N >= 2)
    // Fibonacci series: 0,1,1,2,3,5,8,13,21,34
    int n = 10;
    int first = 0, sec = 1;
    cout << first << " " << sec << " ";
    
    for(int i = 2; i < n; i++){
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }
    cout << "\n";

    return 0;
}