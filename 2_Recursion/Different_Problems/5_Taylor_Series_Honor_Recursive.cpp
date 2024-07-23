#include<iostream>

float taylorSeries(float x,float n){
    static float sum = 1;
    if(n==0){
        return sum;
    }
    sum = 1+x/n*sum;
    return taylorSeries(x,n-1);
}

int main(){
    std::cout << taylorSeries(1,5);
}