/*
2652. Sum Multiples
*/

#include<iostream>
using namespace std;



int main(){
    int n = 10;
    int sum = 0;

    for(int i = 1;i<n+1;i++){
        if(i%3==0 || i%5==0|| i%7==0)
            sum += i;
    }
    
    std::cout<<sum;
    return 0;
}