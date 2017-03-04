#pragma once
#include <iostream>

// function template definition
template<typename T>
void swap(T &a, T & b) {
    T temp = a;
    a = b;
    b = temp;
}

// overloaded template definition, swap two arrays
template <typename T>
void swap(T* a, T* b, int size) {
    T temp;
    for (int i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}