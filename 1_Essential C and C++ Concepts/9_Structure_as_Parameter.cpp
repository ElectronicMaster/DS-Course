#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

// Call by Value
int area(struct Rectangle r1){
    return r1.length*r1.breadth;
}

//Call by reference
void changeLength(struct Rectangle &r,int l){
    r.length = l;
}

//Call by address
void changeLength2(struct Rectangle *r,int l){
    r->length = l;
}

int main(){
    struct Rectangle r={10,5};

    cout << "Area: " << area(r) << endl;

    cout << "Old Length: " << r.length << endl;

    changeLength(r,15);
    cout << "New Length: " << r.length << endl;

    changeLength2(&r,20);
    cout << "New Length: " << r.length << endl;
}