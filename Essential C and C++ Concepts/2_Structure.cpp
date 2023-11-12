#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
    char x; // allocate 4 byte but uses 1 byte 
} r2,r3,r4; // it will same as global variable

struct Rectangle r1,r5; // it will be available for all the function

int main(){
    struct Rectangle r = {15,10};

    cout << "Area of structure : " << r.length*r.breadth << endl;
    cout << "Area of structure : " << r1.length*r1.breadth << endl << endl;

    cout << "Size of r2 : " << sizeof(r2) << endl;
}