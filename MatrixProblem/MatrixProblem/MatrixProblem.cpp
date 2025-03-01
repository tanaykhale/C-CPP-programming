

#include <iostream>
#include"Matrix.h"
#include<crtdbg.h>
using namespace std;

int main()
{
    {
    /*Matrix m1;
    m1.display();*/
    Matrix m2(2, 5);
    m2.display();
    Matrix m3;
    m3.accept();
    m3.display();
    Matrix m4(m2);
    m4.display();


    }
    if (_CrtDumpMemoryLeaks()) {
        cout << "Memory leak";
    }
    else
        cout << "no memory leak";
    return 0;

}


