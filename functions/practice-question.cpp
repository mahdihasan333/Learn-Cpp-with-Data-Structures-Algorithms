#include <iostream>
using namespace std;

// Practice Question ===> WAF to find the product of 2 numbers - a & b
int prod (int a, int b){
    return a * b;
}


// WAF to print if a number is odd or even
void check(int n){
    if(n % 2 == 0){
        cout << "Even";
    }
    else{
        cout << "ODD";
    }
    cout << endl;
}

bool isEven(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    cout << prod(10, 20) << endl;
    check(23);
    cout << isEven(10) << endl;
    return 0;
}