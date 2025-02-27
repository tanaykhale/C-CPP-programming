// 37.	Overload function “Add” to add two integers, floats and doubles.
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
float add(int a, float b)
{
    return a + b;
}
int main()
{
    cout << add(2, 3) << endl;
    cout << add(2, 4.3f) << endl;
    return 0;
}