#include<iostream>

float e(int x, int n){
    float sum=0;
    float p=1,f=1;
    for(int i=1;i<=n+1;i++){
        sum += p/f;
        p*=p;
        f*=i; 
    }
    return sum;
}

int main(){
    std::cout << e(1,5) << std::endl;
}