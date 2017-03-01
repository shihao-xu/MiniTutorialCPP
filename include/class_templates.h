#pragma once
#include <iostream>

/**
 * class template
 */
template <typename T>
class Stack {
private:
    enum { DEFAULT_SIZE = 10 };     // default size if nothing is specified in the constructor
    const int m_size;
    int m_top;                  // current top of stack (free to use)
    T* m_stack;                       // dynamic allocated stack

public:
    Stack(int size = DEFAULT_SIZE);             // 1. Constructor
    Stack(const Stack& stack);                  // Copy constructor, note how to write a copy constructor for a class template
    ~Stack() { delete[] m_stack; }              // Destructor
    bool isEmpty() const { return m_top == 0; }
    bool isFull() { return m_top == m_size; }
    bool push(const T& item);                   // add item to the top of the stack
    bool pop(T& item);                          // pop top into item
    Stack& operator=(const Stack& st);           // 
    void show() const;                          // show the content of the stack
};

// Stack<T>::Stack(int size)
template <typename T>
Stack<T>::Stack(int size) : m_size(size), m_top(0)
{
    m_stack = new T[m_size];
}

// Stack<T>::Stack(const Stack& stack)
template <typename T>
Stack<T>::Stack(const Stack& stack) : m_size(stack.m_size), m_top(0)
{
    m_stack = new T[m_size];
}

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