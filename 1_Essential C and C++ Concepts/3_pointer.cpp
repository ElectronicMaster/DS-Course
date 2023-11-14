#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int a=10;
    int *p;
    p=&a;

    cout << "a : " << a << endl;
    cout << "p, &a : " << p << ", " << &a << endl;
    cout << "*p : " << *p <<  endl;

    cout << endl;

    int A[5] = {2,4,6,8,10};
    int *q;
    q = A;  // in array variable is address of first element

    for(int i=0;i<5;i++){
        cout << q[i] << " ";
    }

    cout << endl << endl;

    int *z,*x;

    z = (int *)malloc(5*sizeof(int));
    x = new int[5];

    z[0]=10;z[1]=15;z[2]=20;z[3]=25;z[4]=30;
    x[0]=11;x[1]=16;x[2]=21;x[3]=26;x[4]=31;    

    cout << "z : ";
    for(int i=0;i<5;i++){
        cout << z[i] << " ";
    }
    cout << endl << "x : ";
    for(int i=0;i<5;i++){
        cout << x[i] << " ";
    }

    free(z);
    delete [] x;

    return 0;
}