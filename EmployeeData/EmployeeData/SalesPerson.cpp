#include<iostream>
#include "SalesPerson.h"
#include"WageEmployee.h"
using namespace std;
SalesPerson::SalesPerson() {
	sold = 0;
	commision = 0;
}
SalesPerson::SalesPerson(int id, const char* n, int d, int m, int y, int h, int r, int s, int c):WageEmployee(id,n,d,m,y,h,r) {
	sold = s;
	commision = c;
}
void SalesPerson::display() {
	WageEmployee::display();
	cout << sold << endl;
	cout << commision << endl;

}
int SalesPerson::cal() {
	return WageEmployee::cal() + sold * commision;
}