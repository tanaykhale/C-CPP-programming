#pragma once
#include<iostream>
using namespace std;
class Matrix
{
	int row;
	int col;
	int** matrix;
public:
	Matrix();
	Matrix(int, int);
	Matrix(Matrix&);
	friend istream& operator>>(istream& , Matrix&);
	friend ostream& operator<<(ostream&, Matrix&);
	Matrix& operator+(Matrix&);
	void operator!();
};

