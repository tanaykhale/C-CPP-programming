#pragma once
class Array
{
	int size;
	int* arr;
public:
	Array();
	Array(int);
	Array(Array&);
	void accept();
	void display();
	~Array();

};

