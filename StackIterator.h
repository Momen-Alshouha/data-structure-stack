#pragma once
#include "StackItem.h"

template <typename T = int, size_t MaxSize = 100>
class StackIterator {
private:
    size_t currentIndex;
    const StackItem<T>* items;

public:
   
    StackIterator(const StackItem<T>* start, size_t index) : items(start), currentIndex(index) {}

   
    bool operator!=(const StackIterator<T>& other) const {
        return currentIndex != other.currentIndex;
    }

    void operator++() {
        ++currentIndex;
    }
   
    T operator*() const {
        return items[currentIndex].data;
    }
};
