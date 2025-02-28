#pragma once

#include<iostream>
#include<cstring>


using namespace std;

class Employee
{
	int emp_id;
	int data[100];
	char emp_name[100];
	double salary;
public:
	Employee();
	Employee(int, char*, double);
	void Accept();
	void Display();
};

