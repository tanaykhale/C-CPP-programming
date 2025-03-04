#include "Matrix.h"

#include<iostream>
using namespace std;
Matrix::Matrix() {
	cout << "Default Constructor"<<endl;
	row = 3;
	col = 3;
	matrix = new int*[3];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[3];
		for (int j = 0; j < col; j++) {
			matrix[i][j] = 0;
		}
	}
}
Matrix::Matrix(int r,int c) {
	cout << "Parameterized  Constructor" << endl;
	row = r;
	col = c;
	matrix = new int* [r];
	for (int i = 0; i < r; i++) {
		matrix[i] = new int[c];
		for (int j = 0; j < c; j++) {
			matrix[i][j] = 0;
		}
	}

}
Matrix::Matrix(Matrix& m) {
	cout << "Copy constructor" << endl;
	row = m.row;
	col = m.col;
	row = 3;
	col = 3;
	matrix = new int* [3];
	for (int i = 0; i < m.row; i++) {
		matrix[i] = new int[3];
		for (int j = 0; j < m.col; j++) {
			matrix[i][j] = m.matrix[i][j];
		}
	}

}
istream& operator>>(istream& cin, Matrix& m) {
	cout << "Enter row and column size" << endl;
	cin >>m.row>>m.col;
	cout << "Enter the elments of matrix"<<endl;
	m.matrix = new int*[m.row];
	for (int i = 0; i < m.row; i++) {
		m.matrix[i] = new int[m.col];
		for (int j = 0; j < m.col; j++) {
			cin >> m.matrix[i][j];
		}
	}
	return cin;
}
ostream& operator<<(ostream& cout, Matrix& m) {
	cout << "Elements of matrix are:" << endl;
	for (int i = 0; i < m.row; i++) {
		for (int j = 0; j < m.col; j++) {
			cout << m.matrix[i][j]<<" ";
		}
		cout << endl;
	}
	return cout;
}
Matrix& Matrix::operator+(Matrix& m) {
	Matrix temp;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			temp.matrix[i][j] = this->matrix[i][j] + m.matrix[i][j];
		}
	}
	return temp;
}
void Matrix::operator!() {
	
	for (int i = 0; i < row; i++) {
		for (int j = i+1; j < col; j++) {
			int temp = this->matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}