#include<iostream>

int factorial(int val){
    
    int res = 1;
    for(int i = 1; i<=val;i++){
        res = res*i;
    }
    return res;
}

int main(){
    
    int n = 6;
    int r = 3;

    int n_ = factorial(n);
    int r_= factorial(r);
    int n_minus_r = factorial(n-r);

    int nCr = (n_)/(r_ * n_minus_r);

    std::cout<< n << "C" << r << " = " << nCr;

}
