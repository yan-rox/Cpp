#include<iostream>
#include<vector>



int main(){
    
    std::vector <int> arr = {4,2,3,6,7,4,3};
    int maxProfit = 0, bestBuy = arr[0];
    int buyIndex,sellIndex;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i]- bestBuy> maxProfit){
           
            maxProfit = arr[i]- bestBuy;
            sellIndex = i;
        }
        if(arr[i]< bestBuy){
            bestBuy = arr[i];
            buyIndex = i;
        }
    }
    std::cout<< "Max profit = " << maxProfit << std::endl;
    std::cout<< "buy at " << buyIndex << ", sell at " << sellIndex << std::endl;

    

  
    
}

