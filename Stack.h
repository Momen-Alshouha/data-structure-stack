#include "StackItem.h"
#include "StackIterator.h"
using namespace std;

template <typename T = int , size_t MAX_SIZE = 100>
class Stack {

private:
    
    using iterator = StackIterator<T>; /// make iterator as alias of StackIterator<T>
    using ptrItem = StackItem<T>*;
    
    ptrItem _ptrtop;
    

    // Get an iterator pointing to the beginning of the stack
    iterator _begin() const {
        return iterator(_ptrtop);
    }


    // Get an iterator pointing to the end of the stack
    iterator _end() const {
        return iterator(nullptr);
    }

public:
    
    Stack() : _ptrtop(nullptr) {}

    ~Stack() {
        while (!IsEmpty()) {
            Pop();
        }
    }

    T GetTop() {
        if (_ptrtop !=nullptr)
        {
            return _ptrtop->data;
        }
    }

    size_t GetSize() {
        size_t size = 0;
        for (iterator itr = _begin(); itr != _end(); ++itr)
        {
            size++;
        }
        return size;
    }

    __declspec(property(get = GetTop)) T top;
    __declspec(property (get = GetSize)) size_t size;

    void Push(T value) {
        ptrItem newItem = new StackItem<T>(value);
        newItem->next = _ptrtop;
        _ptrtop = newItem;
    }

    void Pop() {
        if (IsEmpty()) {
            throw std::underflow_error("Stack underflow");
        }
        ptrItem temp = _ptrtop;
        _ptrtop = _ptrtop->next;
        delete temp;
    }

    // Peek operation to get the element at the top of the stack without removing it
    T Peek() const {
        if (IsEmpty()) {
            throw std::underflow_error("Stack is empty");
        }
        return _ptrtop->data;
    }

    // Check if the stack is empty
    bool IsEmpty() const {
        return _ptrtop == nullptr;
    }

    void Print() {
        if (_ptrtop != nullptr) {
            cout << endl;
            for (iterator itr = _begin(); itr != _end(); ++itr) {
                cout <<"| " << *itr<<" |" << '\n';
            }
            cout << "-----\n";
        }
    }

};