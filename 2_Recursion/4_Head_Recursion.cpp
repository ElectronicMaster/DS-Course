#include<iostream>

void fun_recursion(int n){
    if(n>0){
        fun_recursion(n-1);
        std::cout << n << std::endl; 
    }
}

void fun_loop(int n){
    int i = 0;
    while(i<n){
        i++;
        std::cout << i << std::endl;
    }
}

int main(){
    int n = 3;
    std::cout << "Recursion :" << std::endl;
    fun_recursion(n);
    std::cout << "Loop :" << std::endl; 
    fun_loop(n);
}