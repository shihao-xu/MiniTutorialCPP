/**
* @file class_templates.h
* @brief this header file will contain all required
* definitions and basic utilities for illustration of class and template class concepts.
*
* @author Shihao Xu
*
* @date 2/28/2017
*/

#pragma once
#include <iostream>

template <typename T>
class Stack {
private:
    enum { DEFAULT_SIZE = 10 };             // default size if nothing is specified in the constructor
    const int m_size;
    int m_top;                              // current top of stack (free to use)
    T* m_stack;                             // dynamic allocated stack

public:
    Stack(int size = DEFAULT_SIZE);             // 1. Constructor
    Stack(const Stack& stack);                  // Copy constructor, note how to write a copy constructor for a class template
    ~Stack() { delete[] m_stack; }              // Destructor
    bool isEmpty() const { return m_top == 0; }
    bool isFull() const { return m_top == m_size; }
    bool push(const T& item);                   // add item to the top of the stack
    bool pop(T& item);                          // pop top item into item
    Stack& operator=(const Stack& st);          // 
    void show() const;                          // show the content of the stack
};
 
/**
* This method will be used to create a Stack with a specified size.
* @author Shihao Xu
* @param size The size of the Stack
* @date 3/1/2017
*/
// Stack<T>::Stack(int size)
template <typename T>
Stack<T>::Stack(int size) : m_size(size), m_top(0)
{
    m_stack = new T[m_size];
}

/**
* This method will be used to create a Stack with a existing stack instance.
* @author Shihao Xu
* @param stack Existing stack instance.
* @date 3/1/2017
*/
// Stack<T>::Stack(const Stack& stack)
template <typename T>
Stack<T>::Stack(const Stack& stack) : m_size(stack.m_size), m_top(0)
{
    m_stack = new T[m_size];
}

/**
* This method will be used to push one item onto the stack.
* @author Shihao Xu
* @param item Item to be put on the top of the stack.
* @date 3/1/2017
*/
// Stack<T>::push(const T& item)
template <typename T>
bool Stack<T>::push(const T& item) {
    if (this->isFull()) {
        return false;
    }
    else {
        m_stack[m_top++] = item;
        return true;
    }
}

/**
* This method will be used to pop the stack top.
* @author Shihao Xu
* @param item Container of the item.
* @date 3/1/2017
*/
// Stack<T>::pop(T& item)
template <typename T>
bool Stack<T>::pop(T& item) {
    if (this->isEmpty()) {
        return false;
    }
    else {
        item = m_stack[--m_top];
        return true;
    }
}

/**
* This method is used to show the content of the stack.
* @author Shihao Xu
* @date 3/1/2017
*/
// Stack<T>::show()
template <typename T>
void Stack<T>::show() const {
    if (this->isEmpty()) {
        std::cout << "This stack is empty. " << std::endl;
    }
    else {
        for (int i = 0; i < m_top; i++) {
            std::cout << "Item [" << i << "]: " << m_stack[i] << std::endl;
        }
        std::cout << "End of stack! " << std::endl;
    }
}
