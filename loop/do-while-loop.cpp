#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do{
        cout << i << "\n";
        i++;
    }while(i <= 5);
    // cout << endl;
    
    int val = 1;
    do{
        cout << "Mahdi Hassan in do-while loop" << endl;
    }while(val > 5);
    
    while(val > 5){
        cout << "Mahdi Hassan in while loop";
    }
    return 0;
}