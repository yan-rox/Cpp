#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#include<vector>

    void rotateArray(std::vector<int> &arr, int s){
        int last = arr[s-1];
    
    for(int i = s-1; i>0;i--){
        arr[i] = arr[i-1];
        
    }
    arr[0] = last;
    }

int main(){

    
    std::vector<int> arr = {1,2,3,4,5};
    //rotate this array by 2 right;

    int s = arr.size();
    
    for(int i = 0 ; i<2;i++){
        rotateArray(arr,s);
    }

    for(int i:arr){
        std::cout<< i << " ";
    }


}