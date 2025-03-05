#include "CurrentAccount.h"
#include"Account.h"
CurrentAccount::CurrentAccount() {
	overlimit = 0;
}
CurrentAccount::CurrentAccount(int n, const char* nm, int b, int o):Account(n,nm,b) {
	overlimit = o;
}