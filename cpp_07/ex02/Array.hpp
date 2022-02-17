#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template <typename T>
class Array
{
private:
    T *arr;
    unsigned int size_arr;

public:
    Array(void);
    ~Array(void);
    Array(unsigned int n);
    Array(const Array &other);
    Array &operator=(const Array &other);

    T &operator[](unsigned int index);
    unsigned int size(void);
    void print(void);
};
#include "Array.tpp"
#endif
