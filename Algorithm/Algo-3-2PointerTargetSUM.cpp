#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int>arr = {1,3,4,7,8,11};
    int s = arr.size();
    // 2 pointers approach for getting target SUM;
    int left = 0; int right = s-1;
    int target = 11;
    int sum = 0;
    while(left<right){
        sum = arr[left] + arr[right];
        if(sum<target){
            left++;
        }else if( sum > target ){
            right--;
        }else{
            std::cout<< arr[left] << ", " << arr[right];
            break;
        }

    }

}
  