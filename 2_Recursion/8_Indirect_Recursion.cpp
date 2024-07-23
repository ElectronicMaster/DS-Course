#include<iostream>

int fun(int n){
    if(n>100){
        return n-10;
    }else{
        return fun(fun(n+11));
    }
}

int main(){
    int n = fun(95);
    std::cout << n << std::endl;
}