#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#include<vector>

int main(){

    
    std::vector<std::vector<int>> A = { {1, 1, 1},
                                    {2, 2, 2},
                                    {3, 3, 3},
                                    {4, 4, 4} };

   std::vector<std::vector<int>> B = { {1, 1, 1},
                                    {2, 2, 2},
                                    {3, 3, 3},
                                    {4, 4, 4} };
                            
    int r = 4;
    int c = 3;

    std::vector<std::vector<int>> sum(r,std::vector<int>(c));

    for(int i = 0; i<r;i++){
        for (int j = 0; j< c; j++){
            
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    for(int i = 0; i<r;i++){
        for (int j = 0; j< c; j++){
            
            std::cout<< sum[i][j];
        }
        std::cout<< std::endl;
    }


}