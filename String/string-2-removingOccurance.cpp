#include<iostream>
#include<string>
#include<vector>
#include<algorithm>



int main(){

    std::string name = "acababbacab";
    std::string sub = "ab";
    int pos = 0;
    while((pos = name.find(sub))!= -1){
        
        name.erase(pos, sub.length());

    }
    std::cout<< name;

    
}