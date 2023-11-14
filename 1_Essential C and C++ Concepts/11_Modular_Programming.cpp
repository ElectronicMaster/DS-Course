// MODULAR PROGRAMMING //

#include<iostream>
#include<stdio.h>

using namespace std;

int area(int length,int breadth){
    return length*breadth;
}

int perimeter(int length,int breadth){
    return 2*(length+breadth);
}

int main(){
    int length=0,breadth=0;

    printf("Enter Length and Breadth: ");
    cin >> length >> breadth;

    cout << "Area: " << area(length,breadth) << endl << "Breadth: " << perimeter(length,breadth) << endl;

    return 0;
}