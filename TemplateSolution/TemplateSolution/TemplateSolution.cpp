

#include <iostream>
#include"Add.h"
#include"Stack.h"

int main()
{
    Add<int> a1;
    a1.display();
    Stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    s1.display();

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    Stack<const char*> s2;
    s2.push("Raja");
    s2.push("Ram");
    s2.push("Mohan");
    s2.display();

    

}
