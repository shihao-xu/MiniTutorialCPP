//
//  main.cpp
//  MiniTutorialCPP
//
//  Created by Shihao Xu on 01.11.17.
//

#include <iostream>
#include "../include/class_templates.h"
#include "../include/template_function.h"
#include "../include/utility.h"

void use_class_template();
void use_template_function();

int main(int argc, char** argv) {
    use_class_template();
    use_template_function();

    return 0;
}

void use_class_template() {
    Stack<int> int_stack;
    int_stack.push(0);
    int_stack.push(2);
    int temp = 5;
    int_stack.push(temp);
    int_stack.push(4);
    int_stack.pop(temp);
    int_stack.show();
    std::cout << "temp = " << temp << std::endl;
}

void use_template_function() {
    int a = 3, b = 5;
    std::cout << "before swap template: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "after swap template: a = " << a << ", b = " << b << std::endl;
    int c[3] = { 0,1,2 }, d[3] = { 3,4,5 };
    std::cout << "before swap_array template: " << std::endl;
    show_array(c, "c", sizeof(c) / sizeof(c[0]));
    show_array(d, "d", sizeof(d) / sizeof(d[0]));
    swap(c, d, sizeof(c) / sizeof(c[0]));
    std::cout << "after swap_array templates: " << std::endl;
    show_array(c, "c", sizeof(c) / sizeof(c[0]));
    show_array(d, "d", sizeof(d) / sizeof(d[0]));
}
