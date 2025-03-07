#pragma once
#include"WageEmployee.h"
class SalesPerson :public WageEmployee
{
	int sold;
	int commision;
public:
	SalesPerson();
	SalesPerson(int, const char*, int, int, int, int, int, int, int);
	virtual void display();
	int cal();
};