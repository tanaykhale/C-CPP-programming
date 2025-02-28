#include<iostream>
#include<cmath>
#include "Complex.h"

using namespace std;
int Complex::count;

Complex::Complex() {
	real = 0;
	img = 0;
	count++;
}
Complex::Complex(int real, int img) {
	this->real = real;
	this->img = img;
	count++;
}
void Complex::Acccept() {
	cout << "Enter the two number" << endl;
	cin >> real >> img;

}
void Complex::Display() {
	char ch = img > 0 ? '+' : '-';
	cout << real << ch<<abs( img)<<"i"<<endl;
}
int Complex::getComplex() {
	return real;
}

void Complex::setComplex(int a,int b) {
	real = a;
	img = b;
}
const void Complex::constExample(){
	cout << "Constant value is:" << constexample<<endl;
}
void Complex::showCount() {
	cout << "Number of objects created "<<count;
}
