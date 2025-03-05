#include<iostream>
#include "WageEmployee.h"
#include"Employee.h"
using namespace std;

WageEmployee::WageEmployee() {
	hours = 0;
	rate = 0;
}
WageEmployee::WageEmployee(int id, const char* n, int d, int m, int y, int h, int r):Employee(id,n,d,m,y) {
	hours = h;
	rate = r;
}
void WageEmployee::display() {
	Employee::display();
	cout << hours << endl;
	cout << rate << endl;
}
int WageEmployee::cal() {
	return hours * rate;
}