#include <iostream>
#include "class_templates.h"

int main(int argc, char** argv) {
    Stack<int> int_stack;
    int_stack.push(0);
    int_stack.push(2);
    int temp = 5;
    int_stack.push(temp);
    int_stack.push(4);
    int_stack.pop(temp);
    int_stack.show();
    std::cout << "temp = " << temp << std::endl;

    return 0;
}