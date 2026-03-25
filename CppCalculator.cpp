
#include<iostream>
#include<cmath>

void hypotenuseCalc(double a, double b){
    
  
    double c = sqrt(pow(a,2) + pow(b,2));

    std::cout <<  "The answer is : "<< c << std::endl;
}

void powerCalc(double a, double b){
    std::cout<<  "The answer is : "<<pow(a,b)<< std::endl;
}

void addition(double a, double b){
    std::cout<<  "The answer is : "<<a+b<<std::endl;
}
void subtraction(double a, double b){
    if(a>b){
        std::cout<<  "The answer is : "<<a-b<<std::endl;
    }else{
        std::cout<<  "The answer is : "<<b-a<<std::endl;
    }
}
void multiplication(double a, double b){
    std::cout<<  "The answer is : "<<a*b<<std::endl;
}
void division(double a, double b){
    std::cout<<  "The answer is : "<<a/b<<std::endl;
}



int main (){
    double a,b;
    std::cout<< "Enter A : ";
    std::cin>> a;
    std::cout<< "Enter B : ";
    std::cin>> b;

    while(true){

    std::cout<< "Please select an option below : \n" << "0. Exit \n"
             << "1. Addition \n"<< "2. Subtraction \n" << "3. Multiplication \n" << "4. Division \n"
             << "5. Hypotenuse Calculator \n"<< "6. Power Calculator \n";
    
    int option;
    std::cin >> option;

    

    if(option == 1){
        addition(a,b);
    }else if(option == 2){
        subtraction(a,b);
    }
    else if(option == 3){
        multiplication(a,b);
    }
    else if(option == 4){
        division(a,b);
    }
    else if(option == 5){
        hypotenuseCalc(a,b);
    }
    else if(option == 6){
        powerCalc(a,b);
    }
    else if(option == 0){
        break;
    }
}

    return 0;

 }

