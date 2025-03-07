#pragma once
template <typename T>
class Add
{
	int a,b;
public:
	Add() {
		a = 8;
		b = 9;
	}
	T display() {
		return a + b;
	}
};

