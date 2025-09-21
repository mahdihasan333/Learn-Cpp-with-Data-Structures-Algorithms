#include <iostream>
using namespace std;

void printArr(int *ptr, int n){
    for(int i = 0; i < n; i++){
        // 1st
        // cout << *ptr << "\n";
        // ptr = ptr + 1;
        
        // 2nd 
        cout << *(ptr + i) << "\n";
    }
}

int main() {
//   int a = 5;
//   int *ptr = &a;
   
//   cout << ptr << "\n";  // 1st
//   ptr = ptr + 3;
//   cout << (ptr - 3) << "\n";

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);


    return 0;
}