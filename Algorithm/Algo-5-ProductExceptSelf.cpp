#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int>arr = {1,2,3,4};
    
    int s = arr.size();
    //Prod of array except self
    std::vector<int>newArr(s,1);
    int prefix = 1;
    int postfix = 1;
    for(int i = 0; i< s;i++){
        newArr[i] = prefix;
        prefix *= arr[i];
    }
    for(int i = s-1; i>=0;i--){
        newArr[i] *= postfix ;
        postfix *= arr[i];
    }

    for(int i : newArr){
        std::cout<< i << " ";
    }
    std::cout<< std::endl;


    

}
    
