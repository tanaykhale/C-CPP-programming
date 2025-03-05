

#include <iostream>
#include"Employee.h"
#include"WageEmployee.h"
#include"SalesPerson.h"

using namespace std;

int main()
{
    /*Employee e1(123,"Raj",2,4,2025);
    e1.display();*/
    /*WageEmployee we1(12,"Amar",5,3,2025,10,90);
    we1.dispaly();*/
    SalesPerson s1(23, "Rohan", 5, 3, 2025, 10, 90, 5, 2);
    s1.display();
    cout<<s1.cal()<<endl;
    return 0;
}



