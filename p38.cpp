// 38.	Write a single function “Multiply” to multiply two or three or four integers passed depending on call.
//  Use default value arguments.
#include <iostream>
using namespace std;
int Multiply(int a = 1, int b = 1, int c = 1)
{
    return a * b * c;
}
int main()
{
    cout << Multiply(2, 3, 4) << endl;
    cout << Multiply(1, 2) << endl;
    cout << Multiply(10) << endl;
    return 0;
}