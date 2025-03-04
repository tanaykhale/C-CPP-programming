

//#include <iostream>
//Operator overloading=> it is providing defination to an operator when it is used with object of user definded class.
#include"Array.h"
using namespace std;


int main()
{
    Array a1;
    cin >> a1;
    cout << a1; 
    a1[2];     //a1.operator[](int idx);
    !a1;       //a1.operator!();
}


