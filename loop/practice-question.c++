#include <iostream>
using namespace std;

int main() {
    // print ****
    for(int i=1; i <= 4; i++){
        cout << "****" << endl;
    }


    // Print numbers from n to 1 using for loop
    int nn;
    cout << "enter n : ";
    cin>>nn;
    
    for(int i=nn; i >= 1; i--){
        cout << i << endl;
    }
    
    
    // code
    int n = 12;
    for(int i = n; i >= 1; i--){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}