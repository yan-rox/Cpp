#include<iostream>

void findGCD(int n1, int n2){
    int r = 0;
    while(n1%n2!= 0){
        r = n1%n2;
        n1 = n2;
        n2 = r;
    }

    std::cout << "GCD : "<< n2 << std::endl;
}

void findLCM(int n1, int n2){
    int tn1 = n1, tn2 = n2;
    int r = 0;
    while(n1%n2!= 0){
        r = n1%n2;
        n1 = n2;
        n2 = r;
    }

    int lcm = (tn1*tn2) / n2;

    std::cout<< "LCM : " << lcm<< std::endl;
}

int main (){
    //GDC and LCM 

    int n1, n2;
    int r = 0;
    std::cout<< "Enter the first number (largest) : ";
    std::cin>>n1;
    std::cout<< "Enter the second number (smallest) : ";
    std::cin>>n2;

    std::cout<< "****GCD & LCM Calculator ****"<< std::endl;
    std::cout<< "1. GCD \n" << "2. LCM \n";
    
        int op;
        std::cin>>op;
        if(op == 1){
            findGCD(n1,n2);
        }else if(op == 2){
            findLCM(n1,n2);
        }else if(op == 0){
            break;
        }

        return 0;


    
    }