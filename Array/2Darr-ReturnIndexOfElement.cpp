#include<iostream>
#include<string>
#include<algorithm>
#include<utility>


std::pair<int,int> search (int mat[][3], int r, int c, int key){
    for(int i = 0; i<r;i++){
        for(int j = 0; j<c;j++){
            if(mat[i][j] == key){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}   



int main(){
    
    int arr [4][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int r = 4;
    int c = 3;

    std::pair<int,int> result = search(arr,r,c,8);

    std::cout<< result.first << " "<< result.second;

    
}