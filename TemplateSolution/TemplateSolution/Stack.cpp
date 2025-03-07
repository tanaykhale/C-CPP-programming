#include<iostream>
#include "Stack.h"
using namespace std;
template <typename T>
bool Stack<T>::isempty() {
	return top == -1;
}
template <typename T>
bool Stack<T>::isfull() {
	return top == size - 1;
}
template <typename T>
void Stack<T>::push(T data) {
	if (!isfull()) {

		arr[++top] = data;
	}
	else
		cout << "StackOverflow!!!!" << endl;
}
template<typename T>
T Stack<T>::pop() {
	if (!isempty())
		return arr[top--];
	else
		return NULL;
}


template<typename T>
void Stack<T>::display() {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout <<"hi"<< endl;
}

template class Stack<int>;
template class Stack<const char*>;