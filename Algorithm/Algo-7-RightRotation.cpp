#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int>arr = {1,2,3,4};
    
    int s = arr.size();
    int firstIndex = arr[0];
    for(int i = 0; i<s-1;i++){
        arr[i] = arr[i+1];
        
    }
    arr[s-1] = firstIndex;

    for(int i: arr){
        std::cout<< i << " ";
    }
    


    

}
    