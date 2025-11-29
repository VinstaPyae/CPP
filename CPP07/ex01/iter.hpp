#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <string>
#include <iostream>

template <typename T>
void iter(T a[], size_t l, void (*f)(T&))
{
    for (size_t i = 0; i < l; i++)
    {
        f(a[i]);
    }
}

template <typename T>
void iter(T a[], size_t l, void (*f)(const T&))
{
    for (size_t i = 0; i < l; i++)
    {
        f(a[i]);
    }
}

#endif