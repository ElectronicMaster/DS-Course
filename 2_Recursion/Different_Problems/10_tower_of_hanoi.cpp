#include<iostream>

void TOH(int n,int a,int b,int c){
    if(n>0){
        TOH(n-1,a,c,b);
        std::cout << "from " << a << " to " << c << std::endl;
        TOH(n-1,b,a,c);
    }
}

int main(){
    TOH(2,1,2,3);
}