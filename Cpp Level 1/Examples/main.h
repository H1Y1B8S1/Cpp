#ifndef MAIN_H // Include guard to prevent multiple inclusions
#define MAIN_H

#pragma once
#include <iostream>

//----BankAccount Class----//
class BankAccount
{
private:
    std::string accountHolder;
    double balance;

public:
    BankAccount(const std::string& accountHolder, double balance);
    void deposit(double amount);
    void withdraw(double amount);
    void displayBalance() const;
};

#endif // End of include guard
