#include<iostream>

int main(){
    int r = 4;
    int c = 6;
    for(int i = 0; i<r;i++){
        for(int j = 1; j<i+2;j++){
            std::cout<< "*";
        }
        for(int j =0; j<((r-i-1)*2);j++){
            std::cout<< " ";
        }
        for(int j = 1;j<i+2;j++){
            
                std::cout<< "*";
            
            
        }
        std::cout<< std::endl;
    }
    for(int i = r-1; i>=0;i--){
        for(int j = 1; j<i+2;j++){
            std::cout<< "*";
        }
        for(int j =0; j<((r-i-1)*2);j++){
            std::cout<< " ";
        }
        for(int j = 1;j<i+2;j++){
            
                std::cout<< "*";
            
            
        }
        std::cout<< std::endl;
    }
    
    
    }


    