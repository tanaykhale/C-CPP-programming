#include "Date.h"
#include<iostream>
#include<cstring>
using namespace std;

void Date::showDate(){
	cout << day << "/" << month << "/" << year<<endl;
}

void Date::setDate() {
	cout << "Enter the day ";
	cin >> day;
	cout << "Enter the month ";
	cin >> month;
	cout << "Enter the year ";
	cin >> year;
}
int Date::getDay() {
	return day;

}
void Date::setDate(int day,char* month, int year) {
	this->day = day;
	strcpy(this->month, month);
	this->year = year;
}