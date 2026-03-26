#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int>arr = {1,2,3,4};
    
    int s = arr.size();
    int lastIndex = arr[s-1];
    for(int i = s-1; i>0;i--){
        arr[i] = arr[i-1];
        
    }
    arr[0] = lastIndex;

    for(int i: arr){
        std::cout<< i << " ";
    }
    


    

}