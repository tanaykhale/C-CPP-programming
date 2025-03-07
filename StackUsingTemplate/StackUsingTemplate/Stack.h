#pragma
template <typename T>
class Stack {
	int size;
	T arr[100];
	int top;
public:
	Stack();
	Stack(int);
	bool isempty();
	bool isfull();
	void push(T);
	T pop();
	void display();
};