#pragma once
class Account
{
	int anum;
	char name[30];
	int balance;
	public:
		Account();
		Account(int, const char*, int);
		void accept();
		void display();
		int abal();
};

