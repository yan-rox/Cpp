#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int>arr = {4,2,5,1,3,7,2};
    int s = arr.size();
    int bestBuy = arr[0];
    int profit = 0;
    for(int i = 0 ; i< s;i++){
        profit = std::max(profit, arr[i]-bestBuy);
        bestBuy = std::min(bestBuy, arr[i]);
    }
    std::cout<< "Profit = "<< profit << std::endl;

}
  