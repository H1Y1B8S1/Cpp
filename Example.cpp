#include <iostream>

void callbyvalue(int  value){
    value +=5;
    std::cout<<value<<"\n";
}

void callbyreference(int& value){
    value+=5;
    std::cout<<value<<"\n";

}


int main()
{
    int value = 5;
    callbyvalue(value);
    std::cout<<value<<"\n";
    callbyreference(value);
    std::cout<<value<<"\n";


    return 0;
}