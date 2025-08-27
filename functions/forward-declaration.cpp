#include <iostream>
using namespace std;

void sayName();     // forward declaration

void sayHello(){
    cout << "Hello :) \n";
}

void assistant(){
    sayName();
    sayHello();
    cout << "Work done \n";
}

int main() {
    assistant();     // function call
    return 0;
}

void sayName(){
    cout << "Mahdi Hassan \n";
}