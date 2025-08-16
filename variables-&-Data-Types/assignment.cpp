// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// int main() {
//     int square;
//     cout<<"Enter a Number: ";
//     cin>>square;
//     cout<<"square is "<<square * square<<endl;

//     return 0;
// }

int main(){
    float pencil;
    float pen;
    float eraser;
    
    
    cout<<"Enter Pencil Cost: ";
    cin>>pencil;
    
    cout<<"Enter pen Cost: ";
    cin>>pen;
    
    cout<<"Enter eraser Cost: ";
    cin>>eraser;
    float total = pencil + pen + eraser;

    float gst = total * 0.18;
    cout<<"Total Cost (with GST): "<<gst<<endl;
    
    return 0;
}


// int main(){
//     float P, R, T;
//     cin>>P;
//     cin>>R;
//     cin>>T;
    
//     cout<<"P, R, T: "<<(P * R * T)/ 100;
//     return 0;
// }

// int main(){
//     float rad;
//     cin>>rad;
//     cout<<"area="<<(22/7*rad*rad)<<endl;
//     return 0;
// }

