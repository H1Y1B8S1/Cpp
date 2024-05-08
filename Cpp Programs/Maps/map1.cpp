#include<iostream>
#include<map>
#include<string>

int main(){
    std::map<std::string,int> balance;

    balance.insert(std::make_pair("Sid",50));
    balance.insert(std::make_pair("haya",17));

    auto hayabusa = balance.find("hayabusa");
    std::cout<< hayabusa<<"\n";

}