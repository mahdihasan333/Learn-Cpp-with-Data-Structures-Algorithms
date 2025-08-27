#include <iostream>
using namespace std;

int sum (int a, int b=1){     // a, b are parameters
    int sum = a + b;
    return sum;
}

int diff (int a, int b){     // a, b are parameters
    int diff = a - b;
    return diff;
}

int main() {
    int s = sum(2, 5);      // 2, 3 are arguments
    cout << "sum = " << s << endl;
    int su = sum(2);      
    cout << "sum = " << su << endl;
    
    int d = diff(3, 2);      
    cout << "diff = " << d << endl;
    return 0;
}