#include<iostream>
#include<vector>
#include <algorithm> 

void rotateArray(int arr[],int s){
   int last = arr[s-1];
   for(int i = s-1;i >0;i--){
      arr[i] = arr[i-1];
   }
   arr[0] = last;
}

int main(){
    
    int arr[] = {1,2,3,4};
    int s = sizeof(arr)/sizeof(arr[0]);
    
    rotateArray(arr,s);
    rotateArray(arr,s);

    for(int i : arr){
      std::cout<< i << " ";
    }

  
    
}