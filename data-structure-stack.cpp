
#include <iostream>
#include "Stack.h"

int main()
{
	Stack<int> Stack;

	Stack.Push(1);
	Stack.Push(2);
	Stack.Push(3);
	cout << Stack.top << endl;
	Stack.Print();

}