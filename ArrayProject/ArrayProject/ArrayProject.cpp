// ArrayProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<crtdbg.h>
#include"Array.h"
using namespace std;

int main()
{
    {
        Array a1;
        a1.display(); 
        Array a2;
        a2.accept();
        a2.display();
        Array a3(a2);
        a3.display();

    }
    if (_CrtDumpMemoryLeaks()) {
        cout << "Memory leak" << endl;
    }
    else
        cout << "No memory leak" << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
