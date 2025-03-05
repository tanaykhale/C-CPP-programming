#include "Circle.h"
Circle::Circle() {
	this->radius = 0;
}
Circle::Circle(int r) {
	this->radius = r;
}
void Circle::CalArea() {
	double area = 3.142 * radius * radius;
	cout << "Area of circle " << area << endl;
}
void Circle::CalCircumference() {
	double circum = 2 * 3.142 * r;
	cout << "Circumference of circle is " << circum << endl;
}
