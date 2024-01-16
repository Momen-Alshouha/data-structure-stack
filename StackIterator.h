#include"StackItem.h"

template <typename T = int>
class StackIterator {
private:

    using ptrItem = StackItem<T>*;

    ptrItem _current;

public:

    StackIterator(ptrItem start) : _current(start) {}

    ptrItem GetItem() {
        return _current;
    }

    ptrItem SetItem(ptrItem) {
        return _current=ptrItem;
    }


    __declspec(property(get = GetItem, put = SetItem)) ptrItem current;

    
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