#include "Array.h"
#include<iostream>
using namespace std;
istream& operator>>(istream& cin, Array& a) {
	cout << "Enter the array size:" << endl;
	cin >> a.size;
	a.arr = new int[a.size];
	cout << "Enter array elements:" << endl;
	for (int i = 0; i < a.size; i++) {
		cin >> a.arr[i];
	}
	return cin;
}
ostream& operator<<(ostream& cout, Array& a) {
	cout << "array elements are: "<<endl;
	for (int i = 0; i < a.size; i++) {
		cout << a.arr[i]<<" "<<endl;
	}
	cout << endl;
	return cout;
}
void Array::operator[](int idx) {
	cout<<"Element at index "<<idx<<" is " <<arr[idx] << endl;
}
void Array::operator!() {
	int start = 0;
	int end = size - 1;
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "Reversed elements :"<<endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i]<<" ";
	}
	cout << endl;
}