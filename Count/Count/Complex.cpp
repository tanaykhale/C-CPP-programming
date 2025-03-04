#include "Complex.h"
#include <iostream>
#include<cmath>
using namespace std;

int Complex::count = 0;
Complex::Complex()
{
	real = 0;
	imag = 0;
	count++;
}
Complex::Complex(int r, int i) {
	real = r;
	imag = i;
	count++;
}
void Complex::Accept()
{
	std::cout << "Enter real part: ";
	std::cin >> real;
	std::cout << "Enter imaginary part: ";
	std::cin >> imag;
}	
//void Complex::Display()
//{
//	std::cout << "Real part: " << real << std::endl;
//	std::cout << "Imaginary part: " << imag << std::endl;
//}
void Complex::Display() {
	char ch='+';
	if (imag < 0)
		ch = '-';

	cout << real << ch << abs(imag) << "i" << endl;
}
void Complex::showCount()
{
	std::cout << "Number of objects created: " << count << std::endl;
}

Complex& Complex::operator+(Complex& num) {
	Complex temp;
	temp.real = num.real + this->real;
	temp.imag = num.imag + this->imag;
	return temp;
	
}
Complex& Complex::operator-(Complex& num) {
	Complex temp;
	temp.real = this->real - num.real;
	temp.imag = this->imag - num.imag;
	return temp;
}
Complex& Complex::operator-() {
	Complex temp;
	temp.real = -1 * this->real;
	temp.imag = -1 * this->imag;
	return temp;
}
Complex& Complex::operator++() {
	Display();
	Complex temp;
	temp.real = ++this->real;
	temp.imag = ++this->imag;
	return temp;
}
Complex& Complex::operator++(int i) {
	Display();
	Complex temp;
	temp.real = this->real++;
	temp.imag = this->imag++;
	return temp;
}
bool Complex::operator==(Complex& n) {
	return real == n.real && imag == n.imag;
}