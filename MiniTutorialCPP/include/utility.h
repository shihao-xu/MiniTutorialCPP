/**
* @file utility.h
* @brief this header file contains some generic helper utilities
* @author Shihao Xu
*
* @date 3/04/2017
*/
#pragma once
#include <iostream>

/**
* This method shows the content of an array.
* @author Shihao Xu
* @param a The array address
* @param prompt The prompt string to be printed before the content.
* @param size The size of the array.
* @date 3/1/2017
*/
template <typename T>
void show_array(T *a, char *prompt, int size) {
    std::cout << "The content of " << prompt << " is: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << prompt << "[" << i << "] = " << a[i] << std::endl;
    }
}