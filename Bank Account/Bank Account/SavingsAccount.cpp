#include "SavingsAccount.h"
#include"Account.h"
SavingsAccount::SavingsAccount() {
	rate = 0;
	time = 0;
}
SavingsAccount::SavingsAccount(int n, const char* nm, int b, int r, int t):Account(n,nm,b) {
	rate = r;
	time = t;
}
float SavingsAccount::CalculateNetBalance() {
	return Account::abal() + (rate * time);
}