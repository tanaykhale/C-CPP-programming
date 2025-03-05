#pragma once
#include"Account.h"
class CurrentAccount:public Account
{
	int overlimit;
public:
	CurrentAccount();
	CurrentAccount(int,const char*,int,int);
};

