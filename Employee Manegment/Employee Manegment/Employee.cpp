#include "Employee.h"


Employee::Employee() {
	emp_id = 0;
	strcpy_s(emp_name,"");
	salary = 0;
}

Employee::Employee(int a,char* str,double s) {
	emp_id = a;
	strcpy_s(emp_name, str);
	salary = s;
}
void Employee::Accept() {
	cout << "Enter the emp id"<<endl;
	cin >> emp_id;
	cout << "Enter the emp name" << endl;
	cin >> emp_name;
	cout << "Enter the salary " << endl;
	cin >> salary;
}
void Employee::Display() {

	cout << "Employee id " << emp_id<<endl;
	cout << "Employee name " << emp_name<<endl;
	cout << "Employee salary " << salary<<endl;

}
