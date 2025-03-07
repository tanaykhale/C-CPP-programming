#pragma once
#include"Employee.h"
class Manager:public Employee
{
	int bsal, subord;
public:
	Manager() { bsal = 0; subord = 0; }
	Manager(int i,const char*n,int d,int m,int y,int b, int s):Employee(i,n,d,m,y) { bsal = b; subord = s; }
	void display() {
		Employee::display();
	}
};

