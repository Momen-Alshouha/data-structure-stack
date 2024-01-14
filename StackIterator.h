#include"StackItem.h"

template <typename T = int>
class StackIterator {
private:
    StackItem<T>* current;

public:
    // Constructor
    StackIterator(StackItem<T>* start) : current(start) {}

    // Overloaded != operator for comparison
    bool operator!=(const StackIterator<T>& other) const {
        return current != other.current;
    }

    // Move to the next item in the stack
    void operator++() {
        if (current) {
            current = current->next;
        }
    }

    // Get the current item
    T operator*() const {
        return current->data;
    }
};