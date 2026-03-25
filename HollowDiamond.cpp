#include<iostream>

int main(){
    int r = 6;
    int c = 6;
    int count = 1;
    for(int i = 0;i<r;i++){
        for(int j = 0; j<r-i-1;j++){
            std::cout<< " ";
        }

        for(int j = 1; j<i+2;j++){
            if(i == 0|| j == 1 ){
                std::cout<< "*";
            }else{
                std::cout << " ";
            }
            
        }

       for(int j = i; j>0;j--){
        if(j == 1 ){
                std::cout<< "*";
            }else{
                std::cout << " ";
            }
       }

        

        std::cout<< "\n";
    }

    for(int i = r-1;i>=0;i--){
        for(int j = 0; j<r-i-1;j++){
            std::cout<< " ";
        }

        for(int j = 1; j<i+2;j++){
            if(i == 0|| j == 1 ){
                std::cout<< "*";
            }else{
                std::cout << " ";
            }
            
        }

       for(int j = i; j>0;j--){
        if(j == 1){
                std::cout<< "*";
            }else{
                std::cout << " ";
            }
       }

        

        std::cout<< "\n";
    }
    
    
    }
