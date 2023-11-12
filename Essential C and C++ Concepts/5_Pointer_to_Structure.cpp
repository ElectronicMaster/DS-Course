#include<iostream>
#include<stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){

    // ** 1 ** //

    struct Rectangle r={10,5}; // C
    Rectangle *a; // C++

    a=&r;

    a->length = 15;
    a->breadth = 10;

    printf("length: %d, breadth: %d\n\n",r.length,a->breadth);

    // ** 2 ** //

    struct Rectangle *b;

    b=(struct Rectangle*)malloc(sizeof(struct Rectangle)); // C
    /*
    (or)
    b = new Rectangle; // C++
    */

    b->length = 10;
    b->breadth = 5;

    printf("Length(b): %d, Breadth(b): %d\n",b->length,b->breadth);

    free(b);

    return 0;
}