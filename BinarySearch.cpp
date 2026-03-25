#include<iostream>
#include<vector>
#include <algorithm> 



int main(){
    
    int arr[] = {1,2,3,4,5,7,8};
    int s= sizeof(arr)/ sizeof(arr[0]);
    int start= 0, end = s-1;
    int target = 7;

    while(start<=end){
      int mid = (start+end)/2;
      if(arr[mid]<target){
         start = mid+1;
      }else if( arr[mid]>target){
         end = mid-1;
      }else{
         std::cout<< "target found at indices : "<< mid << " ";
         break;
      }
      
    }
    
   
  
    
}