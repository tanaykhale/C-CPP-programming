#pragma once
#include<iostream>
using namespace std;
class Array
{
	int size;
	int* arr;
public:
	friend istream& operator>>(istream&, Array&);
	friend ostream& operator<<(ostream&, Array&);
	void operator[](int);
	void operator!();
};

