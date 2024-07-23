#include<iostream>

void fun_recursion(int n){
    if(n>0){
        std::cout << n << std::endl;
        fun_recursion(n-1);
    }
}

void fun_loop(int n){
    while(n>0){
        std::cout << n << std::endl;
        n--; 
    }
}

int main(){
    int n=3;
    std::cout << "Recursion :" << std::endl;
    fun_recursion(n);
    std::cout << "Loop :" << std::endl;
    fun_loop(n);
}