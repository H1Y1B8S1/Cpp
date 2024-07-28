#include <iostream>
#include <bitset>

int main()
{
    int number = 42;
    std::bitset<32> binary(number);

    std::cout << "32 bit Binary representation of " << number << " is " << binary << std::endl;

    std::string binaryString = "001110011100111001110011100111";

    // Ensure the size of the bitset matches the length of the binary string
    std::bitset<32> bitsetValue(binaryString);

    // Convert bitset to unsigned long
    unsigned long decimalValue = bitsetValue.to_ulong();

    std::cout << "Decimal value: " << decimalValue << std::endl;

    return 0;
}