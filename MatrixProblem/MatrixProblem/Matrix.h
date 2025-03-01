#pragma once
class Matrix
{
	int i;
	int j;
	int** arr;
public:
	Matrix();
	Matrix(int, int);
	Matrix(Matrix &a);
	void display();
	void accept();
	~Matrix();

};

