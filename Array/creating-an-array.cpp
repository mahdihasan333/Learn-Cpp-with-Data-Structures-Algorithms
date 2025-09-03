#include <iostream>
using namespace std;

int main() {
    // int marks[50] = {1, 2, 3};          // 0 to 49
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[50] << endl;
    // cout << "Mahdi \n";
    // int number[] = {1, 2, 3};
    // cout << number[0] << endl;
    // cout << number[1] << endl;
    // cout << number[2] << endl;
    // cout << number[3] << endl;
    
    int marks[5] = {1, 2, 3, 4, 5};     // 0 to 4
    
    cout << sizeof(marks) << endl;
    cout << sizeof(marks) / sizeof(int) << endl;
    return 0;
}