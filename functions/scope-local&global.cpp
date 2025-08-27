#include <iostream>
using namespace std;

// Practice Question ===> WAF to print the factorial of a number, n.

int num = 34;

void sum (int a, int b){
    
    {
        cout << num << "\n";
        int x = 34;
        cout << x << "\n";
    }
    // cout << x;
    
    if(a >= 1){
        int y = 25;
        cout << y << "\n";
    }
    // cout << y;
    int s = a + b;
    cout << s;
}

int main() {
    sum(5, 3);
    int s = 10;
    cout << s;
    return 0;
}