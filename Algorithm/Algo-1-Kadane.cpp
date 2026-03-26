#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector <int> arr = {1,2,3,-2,1,3};

    int maxSum = arr[0], sum = arr[0];
    for(int i = 1; i< arr.size();i++){
        if(arr[i]>(arr[i]+sum)){
            sum = arr[i];
        }else{
            sum +=arr[i];
        }
        maxSum = std::max(maxSum,sum);
    }

    std::cout<< maxSum << std::endl;
}
    