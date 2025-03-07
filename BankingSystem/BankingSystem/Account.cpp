
#include<cstring>
#include<iostream>
#include "Account.h"
using namespace std;
Account::Account() {
	anum = 000000;
	strcpy(name, "NA");
	balance = 00000;
}
Account::Account(int n, const char* nm, int b) {
	anum = n;
	strcpy(name, nm);
	balance = b;
}
int Account::abal() {
	return balance;
}
void Account::accept() {
	cout << "Enter account number,name and balance:" << endl;
	cin >> anum >> name >> balance;

}
void Account::display() {
	cout << "Account number: " << anum << endl;
	cout << "Account holder name: " << name << endl;
	cout << "Total balance: " << balance << endl;
}
