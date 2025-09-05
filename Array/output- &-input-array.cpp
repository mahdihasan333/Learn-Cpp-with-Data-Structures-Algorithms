#include <iostream>
using namespace std;

int main() {
    // int marks[5] = {7, 5, 2, 1, 3};
    // int n = sizeof(marks) / sizeof(int);
    
    // for(int i = 0; i < n ; i++){
    //     cout << marks[i] << " ";  // i = 0, 1, 2, 3, 4
    // }
    
    // ============================
    
    // int marks[5];
    // int n = sizeof(marks) / sizeof(int);
    
    // for(int i = 0; i < n; i++){
    //     cin >> marks[i];
    // }
    
    // for(int i = 0; i < n ; i++){
    //     cout << marks[i] << ",";  // i = 0, 1, 2, 3, 4
    // }
    
    // ============================
    
    int n;
    cout << "enter length of array: ";
    cin >> n;
    int marks[n];

    for(int i = 0; i < n; i++){
        cin >> marks[i];
    }
    
    for(int i = 0; i < n ; i++){
        cout << marks[i] << ",";  // i = 0, 1, 2, 3, 4
    }
    

    return 0;
}