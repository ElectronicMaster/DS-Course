#include<iostream>

float taylorSeries(int x, int n){
    static float p=1,f=1;
    float r;
    if(n==0){
        return 1;
    }else{
        r = taylorSeries(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
    std::cout << taylorSeries(1,5);
}