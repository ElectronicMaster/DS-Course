#include<iostream>

int sumOfNnumbers_recursion(int n){
    if(n>0){
        return n+sumOfNnumbers_recursion(n-1);
    }else{
        return 0;
    }
}

int sumOfNnumbers_loops(int n){
    int sum = 0;
    while(n>0){
        sum = sum+n;
        n--;
    }
    return sum;
}

int sumOfNnumbers_arithematic(int n){
    return ((n*(n+1))/2);
}

int main(){
    int n=10;
    std::cout << "[Recursion] Sum of " << n << " numbers   : " << sumOfNnumbers_recursion(n) << std::endl;
    std::cout << "[Loops] Sum of " << n << " numbers       : " << sumOfNnumbers_loops(n) << std::endl;
    std::cout << "[Arithematic] Sum of " << n << " numbers : " << sumOfNnumbers_arithematic(n) << std::endl;
}