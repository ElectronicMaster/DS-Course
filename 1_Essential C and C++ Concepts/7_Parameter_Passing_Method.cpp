#include<iostream>

using namespace std;

// // Call by Address

// void swap(int *x, int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main(){
//     int a=10, b=5;

//     cout << "a : " << a << ", b : " << b << endl;
    
//     swap(&a,&b);

//     cout << "a : " << a << ", b : " << b << endl;
// }

// Call by Reference

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a=10, b=5;

    cout << "a : " << a << ", b : " << b << endl;
    
    swap(a,b);

    cout << "a : " << a << ", b : " << b << endl;
}