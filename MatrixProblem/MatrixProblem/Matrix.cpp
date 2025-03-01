#include "Matrix.h"
#include<iostream>
using namespace std;

Matrix::Matrix() {
	i = 3;
	j = 3;
	arr = new int*[i];
	for (int x = 0; x < i; x++) {
		arr[x] = new int[j];
		for (int y = 0; y < j; y++) {
			arr[x][y] = 0;
		}
	}
}
Matrix::Matrix(int a,int b) {
	i = a;
	j = b;
	arr = new int* [i];
	for (int x = 0; x < i; x++) {
		arr[x] = new int[j];
		for (int y = 0; y < j; y++) {
			arr[x][y] = 0;
		}
	}

}
Matrix::Matrix(Matrix& a) {
	i = a.i;
	j = a.j;
	arr = new int* [i];
	for (int x = 0; x < i; x++) {
		arr[x] = new int[j];
		for (int y = 0; y < j; y++) {
			arr[x][y] = a.arr[x][y];
		}
	}
	
}
void Matrix::accept() {
	for (int x = 0; x < i; x++) {
		for (int y = 0; y < j; y++) {
			cin >> arr[x][y];
		}
	}
	
}
void Matrix::display() {
	for (int x = 0; x < i; x++) {
		for (int y = 0; y < j; y++) {
			cout << arr[x][y]<<" ";
		}
		cout << endl;
	}

}
Matrix::~Matrix() {
	for (int i = 0; i < this->i; i++)
		delete arr[i];
	delete[]arr;
}