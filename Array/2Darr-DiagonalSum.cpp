#include<iostream>
#include<string>
#include<algorithm>
#include<utility>

int diagonalSum(int arr[][3],int r,int c){
    int sum = 0;


    for(int i = 0; i<r;i++){
        
        sum += arr[i][i];
        sum+=  arr[i][r-i-1];
        
     }

     return sum;

}



int main(){
    
    int arr [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int r = 3;
    int c = 3;

    std::cout<< diagonalSum(arr,r,c) << std::endl;
    


}