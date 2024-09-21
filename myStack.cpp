//Name: Caroline Su
//Student# : A01369603


#include <iostream>
#include <sstream>
#include "myStack.hpp"

MyStack::MyStack():index(-1){}

bool MyStack::push(int number) {
    if (full()) return false;
    intArray[++index] = number;
    return true;
}

void MyStack::pop() {
    if (index != -1) {
        index--;
    }
}
int MyStack::top() const {
    if(empty()) return -1;
    return intArray[index];
}

bool MyStack::empty() const{
    return index == -1;
}

bool MyStack::full() const{
    return index == (SIZE - 1);
}

std::string MyStack::print() const {
    std::stringstream output;
    output << "[";
    for (int i = index; i >= 1; i--) {
        output << intArray[i] << ", ";
//        std::cout << intArray[i] << " ";
    }
    output << intArray[0] << "]" << std::endl;
    return output.str();
//    std::cout << std::endl;
}
