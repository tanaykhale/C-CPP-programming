#pragma once
class Product
{
	char* product_name;
	int product_code;
	float unit_price;
public:
	Product();
	Product(const char*, int, float);
	Product(Product& p);
	~Product();
	void display();
};
