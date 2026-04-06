#include<iostream>
#include<vector>
#include<algorithm>


void bubbleSort( std::vector<int>&arr, int s){

    bool flag = false;
    
    for(int i = 0; i< s-1;i++){
        for(int j = 0; j< s-i-1;j++){
            if(arr [j] > arr[j+1]){
                std::swap (arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(!flag){
            return ;
        }
    }
}

void selectionSort(std::vector <int>&arr, int s ){
    for(int  i = 0; i< s-1;i++){
        int si = i;
        for(int j = i+1;j<s;j++){
            if(arr[j]<arr[si]){
                si = j;
            }
        }
        std::swap(arr[i],arr[si]);
    }
}

int main (){
    std::vector <int> arr = {1,5,3,2,6,4};
    int s = arr.size();
    selectionSort(arr,s);


    

    for(int i : arr){
        std::cout<< i << " ";
    }
}