#ifndef MAPS_H
#define MAPS_H
#pragma once

#include <iostream>

template <typename KeyType, typename ValueType>
class UnsortedMap
{
public:
    UnsortedMap();
    ~UnsortedMap();

    void insert(const KeyType &key, const ValueType &value);
    void remove(const KeyType &key);
    ValueType &at(const KeyType &key);
    bool contains(const KeyType &key) const;
    size_t size() const;
    bool empty() const;
    void clear();
};

template <typename KeyType, typename ValueType>
class SortedMap
{
public:
    SortedMap();
    ~SortedMap();

    void insert(const KeyType &key, const ValueType &value);
    void remove(const KeyType &key);
    ValueType &at(const KeyType &key);
    bool contains(const KeyType &key) const;
    size_t size() const;
    bool empty() const;
    void clear();
};

#endif
