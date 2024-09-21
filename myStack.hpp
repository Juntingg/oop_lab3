//Name: Caroline Su
//Student# : A01369603

#ifndef LAB3TEMP_MYSTACK_HPP
#define LAB3TEMP_MYSTACK_HPP


class MyStack{
public:
    static constexpr int SIZE = 10;
    // Default constructor
    // PRE: None
    // POST: Stack is initialized with index set to -1 (empty)
    MyStack();

    // Push a number onto the stack
    // PRE: number is a valid integer
    // POST: If the stack is not full, number is added to the top of the stack
    // RETURN: true if the number was added successfully, false if the stack is full
    bool push(int number);

    // Remove the top element from the stack
    // PRE: The stack is not empty
    // POST: The index is decremented, effectively removing the top element
    // RETURN: void
    void pop();

    // Get the top element of the stack
    // PRE: The stack is not empty
    // POST: The stack remains unchanged
    // RETURN: The integer at the top of the stack, or -1 if the stack is empty
    [[nodiscard]] int top() const;

    // Check if the stack is empty
    // PRE: None
    // POST: The stack remains unchanged
    // RETURN: true if the stack is empty, otherwise false
    [[nodiscard]] bool empty() const;

    // Check if the stack is full
    // PRE: None
    // POST: The stack remains unchanged
    // RETURN: true if the stack is full, otherwise false
    [[nodiscard]] bool full() const;

    // Print the contents of the stack
    // PRE: None
    // POST: The stack remains unchanged
    // RETURN: A string representation of the stack from bottom to top
    [[nodiscard]] std::string print() const;
private:
    int index;
    int intArray[SIZE]{};
};


#endif //LAB3TEMP_MYSTACK_HPP
