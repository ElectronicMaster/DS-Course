#include<iostream>

using namespace std;

int main(){
    int a = 10;
    int &r = a; // reference must be initialized when created (or) it will show error

    cout << "a : " << a << endl;
    cout << "r : " << r << endl;

    cout << endl;

    r++;
    cout << "r++" << endl;

    cout << endl;

    cout << "a : " << a << endl;
    cout << "r : " << r << endl;

    return 0;
}