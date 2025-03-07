#pragma once
using namespace std;
template<typename T>
class Stack
{
	int size;
	T arr[100];
	int top;
public :
	Stack() {
		size = 5;
		top = -1;
	}
	Stack(int s) {
		size = s;
		top = -1;
	}
	bool isempty();
	bool isfull();
	void push(T);
	void display();
	T pop();
};

