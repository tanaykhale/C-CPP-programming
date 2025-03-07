
#include <iostream>
#include"Employee.h"
#include"WageEmployee.h"
#include"SalesPerson.h"
#include"SalesManager.h"

using namespace std;

int main()
{
	/*Employee e1(123,"Raj",2,4,2025);
	e1.display();*/
	/*WageEmployee we1(12,"Amar",5,3,2025,10,90);
	we1.dispaly();*/
	/*SalesPerson s1(23, "Rohan", 5, 3, 2025, 10, 90, 5, 2);
	s1.display();
	cout << "Salary of sales man :"<<s1.cal() << endl;*/
	//SalesManager(int i,const char* n,int d,int m,int y, int h, int r, int s, int c, int b, int ss):
	SalesManager sm1(123,"Tanay",12,1,2002,10,900,20,10,10,10);
	sm1.display();
	return 0;
}
