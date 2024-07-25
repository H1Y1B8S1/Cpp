#include<iostream>
#include<string>
using namespace std;

int main(){
    std::string s = "a1";

    char first = s[0],second = s[1];

    std::cout<<"string: "<<s<<"\n";
    std::cout<<"first char of string: "<<first<<"\n";
    std::cout<<"second char of string: "<<second<<"\n";
    std::cout<<"char ASCII value: "<<static_cast<int>(first)<<"\n";
    std::cout<<"second char value to digit conversion"<<second - '0'<<"\n";

    return 0;
}