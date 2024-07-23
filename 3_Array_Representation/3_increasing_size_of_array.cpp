#include<iostream>

int main(){
    int *p = new int[5]{2,4,6,8,10};
    int *q = new int[10];

    for(int i=0;i<5;i++){
        *(q+i) = *(p+i);
    }
    delete [] p;
    for(int i=0;i<5;i++){
        std::cout << *(q+i) << " ";
    }
    p = q;
    q = nullptr;
}   