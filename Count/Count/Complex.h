#pragma once
class Complex
{
	int real;
	int imag;
	static int count;
public:
	Complex();
	Complex(int, int);
	void Accept();
	void Display();
	void showCount();
	Complex& operator+(Complex&);
	Complex& operator-(Complex&);
	Complex& operator-();
	Complex& operator++();
	Complex& operator++(int);
	bool operator==(Complex&);


};

