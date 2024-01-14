#include"StackItem.h"

template <typename T = int>
class StackIterator {
private:

    using ptrItem = StackItem<T>*;

    ptrItem _current;

public:

    StackIterator(ptrItem start) : _current(start) {}

    // Overloaded != operator for comparison
    bool operator!=(const StackIterator<T> other) const {
        return _current != other._current;
    }

    // Move to the next item in the stack
    void operator++() {
        if (_current) {
            _current = _current->next;
        }
    }

    // Get the current item
    T operator*() const {
        return _current->data;
    }
};