
#include <iostream>
#include"Employee.h"
using namespace std;

int main()
{
    Employee e1[100];
    int i=0,id;
    int choice;
    while (true) {
        cout << "1.Enter employee data" << endl;
        cout << "2.Update emplyee data" << endl;
        cout << "3.Display employee data" << endl;
        cout << "4.Exit";
        cout << "Enter choice from the list " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            e1[i].Accept(); 
            i++; 
            break;
        case 2:
            cout << "Enter id of employee to be updated" << endl;
            cin >> id;
            for (int j = 0; j < i; j++)
            {
                if (id == e1[j].getEmpid())
                {
                    e1[j].updateEmployee();
                }
            }

            break;
        case 3:
            for (int j = 0; j < i; j++) {
                e1[j].Display();
            }
            
            break;
        case 4:exit(0);
            break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }
    }
    
}

