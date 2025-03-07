#pragma once
#include"SalesPerson.h"
#include"Manager.h"
class SalesManager:public SalesPerson,public Manager
{
public:
	SalesManager(){}
	SalesManager(int i,const char* n,int d,int m,int y, int h, int r, int s, int c, int b, int ss):
		SalesPerson(i,n,d,m,y,h,r,s,c),
		Manager(i,n,d,m,y,b,ss){ }
	 void display();
};

