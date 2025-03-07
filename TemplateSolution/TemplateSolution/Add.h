#pragma once
#include<iostream>
using namespace std;
template<typename T>
class Add
{
	T a, b;
public:
	Add() {
		a = b = 9;
	}
	void display() {
		cout << a << "+" << b << "=" << a + b<<endl;
	}
};

