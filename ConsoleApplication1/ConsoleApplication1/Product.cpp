#include "Product.h"
#include<iostream>
#include<string.h>
Product::Product(){
	product_name = new char[3];
	strcpy(product_name, "NA");
	product_code = 0;
	unit_price = 0;
}
Product::Product(const char* s, int a, float p) {
	product_name = new char[s.length() + 1];
	strcpy(product_name, s);
	product_code = a;
	unit_price = p;
}
Product::Product(Product& p) {
	product_name = new char[p.product_name.length()+1];
	strcpy(product_name, p.product_name);
	product_code = p.product_code;
	unit_price = p.unit_price;
}
Product::~Product() {
	delete[]product_name;
}
void Product::display() {
	cout << "Name: " << product_name;
	cout << "Code: " << product_code;
	cout << "Price: " << unit_price;
}