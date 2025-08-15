#include <iostream>
using namespace std;

int main() {
    // Question: 1 => Print the sum of digits of a number using while loop.
    // int n = 10829;
    // int digSum = 0;
    // while(n > 0){
    //     int lastDig = n % 10;
    //     cout << lastDig << " \n";
    //     digSum += lastDig;
    //     n = n / 10;
    // }
    // cout << "sum = "<< digSum << endl;
    
    
    // Question: 2 => Print the sum of odd digits of a number using while loop
    // int n = 47839837;
    // int digSum = 0;
    // while(n > 0){
    //     int lastDig = n % 10;
    //     if(lastDig % 2 != 0){
    //         cout << "lastDig " << lastDig << " \n";
    //         digSum += lastDig;
    //     }
    //      n /= 10;
    // }
    // cout << "Sum of odd digits = " << digSum << endl;
    // Question : 3 => Print the digits of a given number in reverse using while loop
    // int number = 4287638;
    // while(number > 0) {
    //     int lastDig = number % 10;
    //     cout << lastDig << " \n";
    //     number /= 10;
    // }
    // cout << endl;
    
    // Question: 4 => Reverse a given number & print the result
    int number = 368732;
    int result = 0;
    while(number > 0){
        int lastDig = number % 10;
        result = result * 10 + lastDig;
        number /= 10;
    }
    cout << "reverse = " << result << endl;
    
    return 0;
}