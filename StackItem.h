
#pragma once
template <typename T = int>
class StackItem {

public:
    T data;
    StackItem<T>* next;

    StackItem(T value) : data(value), next(nullptr) {};

};