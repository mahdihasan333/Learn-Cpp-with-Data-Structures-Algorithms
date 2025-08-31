#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    // int* ptr = &a;
    // int * ptr = &a;
    
    float pi = 3.14;
    float *ptr2 = &pi;
    
    int **pptr = &ptr;
    
    // cout << sizeof(ptr) << "\n";
    // cout << sizeof(ptr2) << "\n";
    
    cout << &pi << " = " << ptr2 << "\n";
    cout << &a << " = " << ptr << "\n";
    cout << &ptr << " = " << pptr << "\n";


    return 0;
}