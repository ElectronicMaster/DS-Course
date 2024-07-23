#include<iostream>

void fun_recursion(int n){
    if(n>0){
        std::cout << n << std::endl;
        fun_recursion(n-1);
        fun_recursion(n-1); 
    }
}

int main(){
    int n1 = 3;
    int n2 = 4;

    std::cout << "fun_recursion(3): " << std::endl; 
    fun_recursion(n1);
    std::cout << "fun_recursion(4): " << std::endl; 
    fun_recursion(n2);
}