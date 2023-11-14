#include<iostream>

using namespace std;

int add(int a,int b){   // Formal parameter (or) parameter
    int c;
    c = a+b;
    return (c);
}

int main(){
    int x,y,z;
    x=10;
    y=5;
    
    z = add(x,y);   // Actual parameter (or) Arguement

    cout << x << " + " << y << " = " << z << endl;
}