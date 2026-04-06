#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

bool isAlphaNumeric(char ch){
    if((ch>='a' && ch<='z' ) || (ch>='A' && ch<= 'Z') || (ch >='0' && ch <='9')){
        return true;
    }
    return false;
}

char toLower(char ch){
    if(ch >= 'A' && ch<='Z'){
        return ch- 'A' + 'a';
    }
    return  ch;
}

int main(){

    std::string name = "ac3?e3c&a";
    int st = 0; int end = name.length()-1;
    while(st<end){
        if(!isAlphaNumeric(name[st])){
        st++;
        continue;
    }
    if (!isAlphaNumeric(name[end])){
        end--;
        continue;
    }

    if(tolower(name[st]) != tolower(name[end])){
        std::cout<< "Not a palindrome";
        return 0;
    }

    st++;
    end--;
    }

    std::cout<< "palindrome";

    
}