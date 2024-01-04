#ifndef ARRAY_H
#define ARRAY_H
#pragma once

#include <iostream>

class AdvancedArray
{

private:
    int *arr;
    size_t capacity;
    size_t size;

public:
    AdvancedArray(size_t initialCapacity = 10);
    ~AdvancedArray();

    void push_back(int value);
    void pop_back();
    void insert(size_t index, int value);
    void erase(size_t index);
    int &at(size_t index);
    int &front();
    int &back();
    bool empty() const;
    size_t getSize() const;
    size_t getCapacity() const;
    void clear();
    size_t find(int value) const;
    void display() const;
};

#endif