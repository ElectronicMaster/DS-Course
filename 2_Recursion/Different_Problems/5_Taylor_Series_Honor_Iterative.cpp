#include<iostream>

float taylorSeries(float x,float n){
    float sum = 1;
    for(;0<n;n--){
        sum = 1 + x/n*sum;
    }
    return sum;
}

int main(){
    std::cout << taylorSeries(1.0,5.0);
}