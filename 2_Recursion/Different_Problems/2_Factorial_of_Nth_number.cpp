#include<iostream>

int fun_recursion(int n){
    if(n>0){
        return n*fun_recursion(n-1);
    }else{
        return 1;
    }
}

int fun_loop(int n){
    int i = 0;
    int result = 1;
    while(n>i){
        i++;
        result *= i;
    }
    return result;
}

int main(){
    int n = 10;
    std::cout << "[recursion] Factorial of " << n << " : " << fun_recursion(n) << std::endl;
    std::cout << "[loop] Factorial of " << n << "      : " << fun_loop(n) << std::endl;
}