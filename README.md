# Stack Implementation in C++

This repository contains a C++ implementation of a stack data structure using a linked list. The stack implementation is designed with Object-Oriented Programming principles.

## Overview

### Classes

- **StackItem:** Represents individual elements in the stack.
- **StackIterator:** Provides iteration capabilities over the stack.
- **Stack:** Implements the stack and its functionalities.

### Classes and Functionality

#### StackItem Class

The `StackItem` class represents individual elements in the stack. Each item holds:

- `_data`: Data of type T.
- `_ptrNext`: Pointer to the next item.

#### StackIterator Class

The `StackIterator` class provides functionality for iterating through the stack. It includes methods to:

- Access item data.
- Move to the next item.
- Access the current item.

#### Stack Class

The `Stack` class implements a stack with the following functionalities:

- Retrieving the top item.
- Getting the size of the stack.
- Pushing elements onto the stack.
- Popping elements from the stack.
- Peeking at the top element without removing it.
- Checking if the stack is empty or full.
- Checking the existence of a value in the stack.
- Clearing the entire stack.
- Printing the elements of the stack.

## Usage

To use this stack implementation, follow these steps:

1. Clone the repository.
2. Include the necessary header files in your C++ code: `StackItem.h`, `StackIterator.h`, and `Stack.h`.
3. Create a `Stack` object and utilize its functionalities as per your requirements.

## Example Usage of the Stack Class

```cpp
#include "Stack.h"

int main() {
    // Example with int data type and a maximum size of 10
    Stack<int, 10> myStack;

    // Pushing elements onto the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(20);

    // Peeking at the top element without removing it
    int topElement = myStack.peek();
    std::cout << "Top element: " << topElement << std::endl;

    // Popping elements from the stack
    myStack.pop();

    // Checking the size of the stack
    std::cout << "Current stack size: " << myStack.size() << std::endl;

    // Checking if the stack is empty
    if (myStack.isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Printing the elements of the stack
    std::cout << "Elements of the stack: ";
    myStack.print();
    
    return 0;
}
