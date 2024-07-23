#include<iostream>

// int nCr(int n,int r){
//     static int x=1,d=1;
//     if(n==r || r==0){
//         return 1;
//     }
//     if(r==1){
//         x *= n;
//         return x/d;
//     }
//     x *= n;
//     d *= r;
//     nCr(n-1,r-1);
// }

int nCr(int n, int r) {
    // Base cases
    if (r == 0 || r == n) {
        return 1;
    }
    
    // Recursive call
    return nCr(n-1, r-1) + nCr(n-1, r);
}


int main(){
    std::cout << nCr(7,4);
}