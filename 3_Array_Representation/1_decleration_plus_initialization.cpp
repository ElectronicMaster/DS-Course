#include<iostream>



int main(){
    int A[5] = {2,4,6,8,10};
    int B[] = {2,4,6,8,10};

    int sizeOfA = sizeof(A) / sizeof(int);

    std::cout << "Array A :" << std::endl;
    for(int i=0;i<sizeOfA;i++){ 
        std::cout << "Memory->" << &A[i] << " : " << A[i] << std::endl;
    }

    // Accessing styles
    std::cout << "A[2]   : " << A[2] << std::endl;
    std::cout << "2[A]   : " << 2[A] << std::endl;
    std::cout << "*(A+2) : " << *(A+2) << std::endl;
}