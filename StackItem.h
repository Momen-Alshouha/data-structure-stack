
#pragma once
template <typename T = int>
class StackItem {

    T _data;
    StackItem<T>* _ptrnext;

public:
    
    StackItem(T value) : _data(value), _ptrnext(nullptr) {};

    T GetData() {
        return _data;
    }

    void SetData(T Data) {
        _data = Data;
    }

    StackItem<T>* GetNext() {
        if (_ptrnext!=nullptr)
        {
            return _ptrnext;
        }
        return nullptr;
    }

    void SetNext(StackItem<T> *ptrnext) {
        _ptrnext = ptrnext;
    }


    // proprties
    __declspec(property(get = GetData, put = SetData)) T data;
    __declspec(property(get = GetNext, put = SetNext)) StackItem<T>* next;

};