#include<iostream>
#include"Stack.h"
using namespace std;
int main() {
	Stack<int> s1;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.display();
	cout << s1.pop()<<endl;
	cout << s1.pop()<<endl;


	return 0;
	
}