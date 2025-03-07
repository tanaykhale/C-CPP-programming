//

#include <iostream>
#include"SavingsAccount.h"
#include"Account.h"

using namespace std;

int main()
{
    SavingsAccount s1;
    int choice;
    while (true) {
    cout << "Banking Mangement System"<<endl;
    cout << "1.Open Account" << endl;
    cout << "2.Display Accoutn details" << endl;
    cout << "3.Display balance" << endl;
    cout << "4.Exit()" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1 :s1.accept(); break;
    case 2:s1.display(); break;
    case 3:cout<<"Total balance after interest is "<<s1.CalculateNetBalance()<<endl; break;
    case 4:exit(0); break;
    default:
        cout << "Enter correct choice"<<endl;
        break;
    }

    }


}