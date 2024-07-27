#include<iostream>
#include<bitset>

int main() {
    int number = 42; 
    std::bitset<32> binary(number); 

    std::cout << "32 bit Binary representation of " << number << " is " << binary << std::endl;

    return 0;
}