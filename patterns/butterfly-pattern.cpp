#include <iostream>
using namespace std;

int main() {
    // Butterfly Pattern
    int n = 4;
    
    // upper half
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int k = 1; k <= 2*(n-i); k++){
            cout << " ";
        }
        for(int l = 1; l <=i; l++){
            cout << "*";
        }
        cout << endl;
    }
    
    
    // lowr half
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int k = 1; k <= 2*(n-i); k++){
            cout << " ";
        }
        for(int l = 1; l <=i; l++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}