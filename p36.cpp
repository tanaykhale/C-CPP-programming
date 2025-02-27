// 36.	Implement function “Swap” to swap to integers. Use call by reference.
#include <iostream>
using namespace std;
void swap(int &ra, int &rb)
{
    int temp = ra;
    ra = rb;
    rb = temp;
}
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}