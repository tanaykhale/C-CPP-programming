#include"Stack.h"
#include<iostream>
using namespace std;
template <typename T>
Stack<T>::Stack() {
	size = 5;
	top = -1;
}
template <typename T>
Stack<T>::Stack(int s) {
	size = s;
	top = -1;
}
template <typename T>
bool Stack<T>::isempty() {
	return top == -1;
}
template <typename T>
bool Stack<T>  ::isfull() {
	return top == size - 1;
}
template <typename T>
void Stack<T>::push(T data) {
	if (!isfull())
		arr[++top] = data;
	else
		cout << "overflow !" << endl;
}
template <typename T>
T Stack<T>::pop() {
	if (!isempty())
		return arr[top--];
	else
	{
		cout << "underflow !" << endl;
		return NULL;
	}

}

template <typename T>
void Stack<T>::display() {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
}
