#include<iostream>

using namespace std;

int main(){
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    int B[] = {2,4,6,8,10,12,14};
    int C[10] = {2,4};  // rest of the elements are 0

    cout << "Size of A : " << sizeof(A) << endl;    // int size 4 * size of array 5 = 20
    cout << "Size of B : " << sizeof(B) << endl << endl;    // 28 number of elements = 7

    cout << "A[0] : " << A[0] << endl;
    printf("A[2] : %d\n",A[2]);

    cout << "C[3] : " << C[3] << endl << endl;

    // Display array
    for(int i=0;i<7;i++)
        cout << "B[" << i << "] : " << B[i] << endl;

    for(int x : B)
        cout << x << " ";
}