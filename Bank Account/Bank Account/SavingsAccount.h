#pragma once
#include"Account.h"
class SavingsAccount:public Account
{
	int rate;
	int time;
public:
	SavingsAccount();
	SavingsAccount(int, const char*, int, int, int);
	float CalculateNetBalance();
};

