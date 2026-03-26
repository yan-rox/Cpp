#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int>arr = {1,2,3,4,6,7,8,9,10};
    
    int s = arr.size();
    //binary search
    int st = 0,end = s-1;
    int target = 6;
    while(st<=end){
        int mid = (st+end)/2;
        if(arr[mid]<target){
            st = mid+1;
        }else if(arr[mid]> target){
            end = mid-1;
        }else{
            std::cout<< "Target found at " << mid << std::endl;
            break;
        }
    }
    


    

}