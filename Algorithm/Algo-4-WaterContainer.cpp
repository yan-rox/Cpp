#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int>arr = {4,2,5,1,3,7,2};
    int s = arr.size();
    //Water Container;
    int left = 0;
    int right = s-1;
    
    int maxArea = 0;
    
    while(left< right){
        int w = right-left;
        int h = std::min(arr[right],arr[left]);
        int area = w*h;
        maxArea = std::max(area,maxArea);
        if(arr[left]<arr[right]){
            left++;
        }else{
            right--;
        }
        
    }
    std::cout<< "MAX = "<< maxArea << std::endl;

}
    


