#pragma once

template <typename T = int, size_t MaxSize = 100>
class StackItem {
    
    T _data;

public:
    
    StackItem(T value) : data(value) {}

    T GetData() {
        return T;
    }

    T SetData(T Data) {
        _data = Data;
    }

    __declspec(property(get = GetData, put = SetData)) T data;
};