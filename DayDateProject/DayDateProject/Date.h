#pragma once
class Date
{
	int day;
	char month[100];
	int year;
public:
	void showDate();
	void setDate();
	int getDay();
	void setDate(int, char*, int);
};

