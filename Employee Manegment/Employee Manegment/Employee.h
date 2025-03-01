#pragma once

#include<iostream>
#include<cstring>


using namespace std;

class Employee
{
	int emp_id;
	char emp_name[100];
	double salary;
public:
	Employee();
	Employee(int,const char*, double);
	
	void Accept();
	void Display();
	int getEmpid();
	void updateEmployee();

};

