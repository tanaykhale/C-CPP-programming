#include<cstring>
#include<iostream>
#include "Employee.h"
#include"Date.h"

using namespace std;

Employee::Employee() {
	eid=100;
	strcpy(name, "Ram");
}
Employee::Employee(int id,const char* n,int d,int m,int y):dob(d,m,y) {
	eid = id;
	strcpy(name, n);
}
void Employee::display()  {
	cout << eid << endl;
	cout << name << endl;
	dob.display();
}