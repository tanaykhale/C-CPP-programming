// StandardTemplateLib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<stack>
#include<iterator>
using namespace std;

int main()
{
 
    vector<int> v1;
    int num;
    cout << "Enter the 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        v1.push_back(num);
    }
    v1.push_back(111);
    v1.push_back(222);
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    v1.pop_back();
    v1.pop_back();
    vector<int>::iterator itr;
    for (itr = v1.begin(); itr != v1.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
    

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
