#include<iostream>
#include<vector>
#include <algorithm> 



int main(){
    
    std::vector <int> arr = {1,2,3,4};
    int s = arr.size();
    std::vector<int>newArr(4);
    int pre = 1;
    int post= 1;
    int sum = 1;

    for(int i = 0;i< s;i++){
      newArr[i] = pre;
      pre *= arr[i];
    }
    for(int i = s-1;i>=0;i--){
      newArr[i] *= post;
      post *= arr[i];
    }
    for(int i : newArr){
      std::cout<< i<< " ";
    }


  
    
}
