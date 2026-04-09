#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#include<vector>

    

int main(){

    
    std::vector<int> arr = {1,2,2,4,2};
    int n = arr.size();
    int majorityCheck = n/2;
    int count = 0;
    int major =0;
    int majorIndex = 0;
    for(int i = 0; i<n;i++){
        count = 1;
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                
            }
            
            
            
        }
        if(count>major){
                major = count;
                majorIndex = i;
            }
    }
    if(major>majorityCheck){
        std::cout<< arr[majorIndex] << " is the majority element"<< std::endl;
    }
   


}