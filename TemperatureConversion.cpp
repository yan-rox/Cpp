#include<iostream>

void celciusToFahrenheit(double c){
    double f = (1.8*c)+32;
    std::cout << "The temperature in Fahrenheit is :  " << f << std::endl;
}
void fahrenheitToCelcius( double f){
    double c = (f-32)/1.8;
    std::cout << "The temperature in Celcius is :  " << c << std::endl;
}

int main(){
    double f,c;

    int op;

    while (true){

    std::cout<< "******** Temperature conversion **********\n"<< std::endl;

    std::cout<< "1. C to F \n" << "2. F to C \n";

    std::cin>> op;

    if(op == 1){
        std::cout<< "Enter the temperature in Celsius : "<< "\n";
        std::cin>>c;
        celciusToFahrenheit(c);
    }else if( op == 2){
        std::cout<< "Enter the temperature in Fahrenheit : "<< "\n";
        std::cin>>f;
        fahrenheitToCelcius(f);
    }else if(op == 0){
        break;
    }
    
}
    return 0;

    


}