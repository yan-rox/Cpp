#include<iostream>

int fibonacci(int a, int b){

    
    int sum = 0;

    sum = a+b;

    return sum;
    
    
}

int main(){
    
    int a = 0;
    int b = 1;
    

    int n= 6;

    std::cout<< a << " " << b;

    for(int i = 1; i<= n;i++){

        int val = fibonacci(a,b);

        
        std::cout<< " "<< val;

        a = b;
        b = val;
        // 0 1 1 2 3 5
    }
    
}