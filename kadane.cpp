#include<iostream>
#include<vector>

int main(){
    
  
    std::vector<int>v = {1,3,4,3,3,9};
    int s = v.size();
    
    int sum = 0;
    int max = -999;
    for(int i = 0; i< s;i++){
        if(v[i]> sum + v[i]){
            sum = v[i];
        }else{
            sum += v[i];
        }
        if(sum> max){
            max = sum;
        }
    }
    std::cout<< sum;
}
