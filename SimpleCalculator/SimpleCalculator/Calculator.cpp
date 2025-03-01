#include "Calculator.h"

Calculator::Calculator() {
	num1 = 0;
	num2 = 0;
}

Calculator::Calculator(int a,int b) {
	num1 = a;
	num2 = b;
}
int Calculator::add() {
	cout<< num1+num2;
}
int Calculator::subtract() {
	return num1 - num2;
}
int Calculator::multiply() {
	return num1 * num2;
}
int Calculator::divide() {
	return num1 / num2;
}