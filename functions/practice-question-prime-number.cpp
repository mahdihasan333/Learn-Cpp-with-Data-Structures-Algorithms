#include <iostream>
using namespace std;

// Practice Question ===> WAF to print if a number is prime or not.

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){     // non-prime
            return false;
        }
    }
    
    return true;
}

bool isPrime2(int n){
    if(n == 1){
        return false;
    }
    
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    cout << isPrime(4) << endl;
    cout << isPrime2(23) << endl;
    return 0;
}