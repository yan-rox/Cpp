#include<iostream>
#include<string>
#include<algorithm>
#include<utility>

int maxRowSum(int arr[][3],int r,int c){
    int maxSum = 0;


    for(int i = 0; i<r;i++){
        int sum = 0;
        for(int j = 0; j<c;j++){
            sum = sum+ arr[i][j];
            
         }
         maxSum = std::max(sum,maxSum);
     }

     return maxSum;

}



int main(){
    
    int arr [3][3] = {{1,2,3},{7,8,9},{4,5,6}};
    int r = 3;
    int c = 3;

    

    int maxSum = maxRowSum(arr,r,c);
    

    std::cout<<maxSum;

}