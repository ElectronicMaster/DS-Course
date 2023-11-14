// Passing array as parameter

// Allocating pointers as an array

#include<iostream>
#include<stdlib.h>

using namespace std;

int * conv_array(int n){
    int *p;
    p = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        p[i] = i+1;
    }
    
    return (p);
}

void assign(int *p,int n){
    for(int i=0;i<n;i++){
        p[i] = 0;
    }
}

void display(int *p,int n){
    for(int i=0;i<n;i++){
        cout << p[i] << " ";
    }

    // for(int x:p){    // pointer does not work in for each loop
    //     printf("%d",p);
    // }
    cout << endl;
}

int main(){

    int *A;
    A = conv_array(10);

    cout << "Size in int main(): " << sizeof(A)/sizeof(int) << endl; // size is wrong as it is pointer
    
    display(A,10);

    assign(A,10);

    display(A,10);
}