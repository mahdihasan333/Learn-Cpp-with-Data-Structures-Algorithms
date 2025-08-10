// my code
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter a number: ";
    cin>>num;
    
    
    for(int i = 0; i < num; i++){
        cout << "number is " << i << endl; 
    }

    return 0;
}

// course code
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter your n : ";
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}