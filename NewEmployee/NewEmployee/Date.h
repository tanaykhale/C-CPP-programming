#pragma once
class Date
{
	int dd, mm, yyyy;
public:
	Date() { dd = 0; mm = 0; yyyy = 0; }
	Date(int d, int m, int y) { dd = d; mm = m; yyyy = y; }
	void display();
};

