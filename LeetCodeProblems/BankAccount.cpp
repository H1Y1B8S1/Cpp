#include "main.h"

// member initializer list method is better  but complex
// BankAccount::BankAccount(const std::string &holder, double initialBalance) : accountHolder(holder),
//                                                                              balance(initialBalance) {}

// initializing inside the constructure

BankAccount::BankAccount(const std::string& accountHolder, double balance)
{
    this->accountHolder = accountHolder;
    this->balance = balance;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
    std::cout << "Deposited $" << amount << " into account of " << accountHolder << std::endl;
}

void BankAccount::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        std::cout << "Withdrawn $" << amount << " from account of " << accountHolder << std::endl;
    }
    else
    {
        std::cout << "Insufficient funds for withdrawal from account of " << accountHolder << std::endl;
    }
}

void BankAccount::displayBalance() const
{
    std::cout << "Account holder: " << accountHolder << ", Balance: $" << balance << std::endl;
}
