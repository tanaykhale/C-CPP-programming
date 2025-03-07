#pragma once
class Account
{
	int balance;
public:
	Account() { balance = 100000; }
	Account(int b) { balance = b; }
	int currentBalance() { return balance; }
	void deposite(int amt) { balance += amt; }
	void withdraw(int amt) { balance -= amt; }
};

