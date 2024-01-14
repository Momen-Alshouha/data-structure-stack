
#include <iostream>
#include "Stack.h"

int main()
{
	Stack<int> Stack;

	Stack.Push(1);
	Stack.Push(2);
	Stack.Push(3);
	cout <<"Top Item : "<< Stack.top << endl;
	Stack.Print();
	cout << "Stack Size : " << Stack.size << endl;

}