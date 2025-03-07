// ExceptionHandling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdexcept>
#include"Account.h"
using namespace std;

int main()
{
    
    Account a1;
    int choice;

    while (true) {
        cout << "Enter your choice" << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1: {
            int amt;
            cout << "Enter the amount to withdraw: " << endl;
            cin >> amt;
            try {
                if (amt > 15000) {
                    cout << "Enter amount less than 15000" << endl;
                    break;
                }
                a1.withdraw(amt);
                cout << "Withdrawal successful. Current balance: " << a1.currentBalance() << endl;
            }
            catch (const runtime_error& err) {
                cerr << "Error: " << err.what() << endl;
            }
            catch (const invalid_argument& err) {
                cerr << "Error: " << err.what() << endl;
            }
            break;
        }
        case 2: {
            int amt;
            cout << "Enter the amount to deposit: " << endl;
            cin >> amt;
            try {
                a1.deposite(amt);
                cout << "Deposit successful. Current balance: " << a1.currentBalance() << endl;
            }
            catch (const invalid_argument& err) {
                cerr << "Error: " << err.what() << endl;
            }
            break;
        }
        case 3:
            exit(0);
            break;
        default:
            cout << "Enter the correct choice" << endl;
            break;
        }
    }
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
