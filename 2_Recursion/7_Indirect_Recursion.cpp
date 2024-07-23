#include<iostream>

void funB(int);

void funA(int n){
    std::cout << "funA(" << n << ") : ";
    if(n>0){
        std::cout << n << std::endl;
        funB(n-1);
    }
}

void funB(int n){
    std::cout << "funB(" << n << ") : ";
    if(n>0){
        std::cout << n << std::endl;
        funA(n/2);
    }
}

int main(){
    int n=20;
    funA(n);
}