#include "Array.h"
#include<iostream>
using namespace std;


Array::Array() {
	size = 5;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}
Array::Array(int s) {
	size = s;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
}
Array::Array(Array& a) {
	size = a.size;
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = a.arr[i];
	}
}
void Array::accept() {
	cout << "Enter the size ";
	cin >> size;
	cout << "Enter array elements" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
void Array::display() {
	for (int i = 0; i < size; i++) {
		cout << arr[i]<<" ";
	}
}
Array::~Array() {
	delete[] arr;
}