#pragma once
class Complex
{
	int real;
	int img;
	const int constexample=100;
	static int count;
public:
	Complex();
	Complex(int, int);
	void Acccept();
	void Display();
	int getComplex();
	void setComplex(int ,int);
	const void constExample();
	static void showCount();
};

