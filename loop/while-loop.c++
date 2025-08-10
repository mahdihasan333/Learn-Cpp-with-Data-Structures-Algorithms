#include <iostream>
using namespace std;

int main() {
    // int count = 1;
    // while(count <= 5){
    //     cout << count << " ";
    //     count++;
    // }
    // cout << endl;
    
    int sum = 0;
    int n = 18;
    int i = 10;
    while(i <= n){
        cout << i << " \n";
        sum += i;
        i++;
    }
    cout <<"sum is : " << sum << endl;
    cout << endl;
    
    return 0;
}