#include<iostream>

int fibonnaci(int n){
    static int x = 0,y = 1;
    if(n>0){
        int temp = y;
        y = x + y;
        x = temp;
        fibonnaci(n-1);
    }else{
        return x;
    }
}

int main(){
    std::cout << fibonnaci(7);
}