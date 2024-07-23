#include<iostream>

int fun(int x){
    if(x>0){
        std::cout << x << std::endl;
        fun(x-1);
    }
}

int main(){
    int x = 3;
    fun(x);
}