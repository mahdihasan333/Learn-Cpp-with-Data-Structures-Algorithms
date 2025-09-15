#include <iostream>
using namespace std;

// void func(int arr[]){
//     arr[0] = 1000;
// }

// void func2(int *ptr){
//     ptr[0] = 1000;
// }


// int main() {
//     int a = 5;
//     int *ptr = &a;
//     cout << ptr << endl;    // 0x....
    
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);
//     // cout << arr << endl;
//     // cout << *arr << endl;   // arr[0]
//     // cout << *(arr + 1) << endl;     // arr[1]
//     // cout << *(arr + 2) << endl;     // arr[2]
    
//     // func(arr);      // passing array name is eq. to passing the pointer
//     // cout << arr[0] << endl;
    
    
//     func2(arr);      
//     cout << arr[0] << endl;
    
//     return 0;
// }

void printArr(int nums[], int n){
    // cout << sizeof(nums) << endl;   // 8 = size of int pointer
    
    // int n = sizeof(nums) / sizeof(int);
    
    for(int i = 0; i <n; i++){
        cout << nums[i] << ",";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout << "array size = " << sizeof(arr) << endl;
    printArr(arr, n);
    return 0;
}
