#include<iostream>

int fun(int n){
    int static count = 0;
    if(n>0){
        count++;
        fun(n-1);
    }
    return count;
}

int factorial(int n){
    if(n>1){
        return factorial(n-1)*n;
    }
}

int main(){
    std::cout << fun(3) << std::endl;
    std::cout << factorial(5) << std::endl;
}