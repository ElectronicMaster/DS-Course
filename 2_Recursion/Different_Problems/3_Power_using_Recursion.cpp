#include<iostream>

int pow(int num,int n){
    if(n>0){
        return num*pow(num,n-1);
    }else{
        return 1;
    }
}

int pow_efficient(int num,int n){
    if(n==0){
        return 1;
    }
    if(n%2 == 0){
        pow_efficient(num*num,n/2);
    }else{
        return num*pow_efficient(num*num,(n-1)/2);
    }
}

int main(){
    int num = 3;
    int n = 4;

    std::cout << "pow(" << num << "," << n << ")           : " << pow(num,n) << std::endl;
    std::cout << "pow_efficient(" << num << "," << n << ") : " << pow_efficient(num,n) << std::endl;
}