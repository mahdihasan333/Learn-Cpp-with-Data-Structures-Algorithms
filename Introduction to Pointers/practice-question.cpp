#include <iostream>
using namespace std;

// Practice Question ===> What will ptr2 print to in the following code:
int main() {
    int x = 5, y = 10;
    int *ptr1 = &x, *ptr2 = &y;
    ptr2 = ptr1;
    
    
    cout << ptr2 << "\n";
    cout << ptr1 << "\n";
    cout << &x << "\n";



    // Practice Question ===> What is the type of a & b:
    float* a, b;
    
    // Practice Question ===> /can we initialize a pointer with value 0?
    int *ptr = 0;
    cout << ptr << "\n";
    
    return 0;
}