#include<iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout <<"Display Base";
    }
    virtual void show()
    {
        cout <<"Show Base";
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout <<"Display Derived";
    }
    void show()
    {
        cout <<"Show Derived";
    }
};
int main()
{
    Base b;
    Derived d;
    Base *bptr;
    bptr = &b;
    bptr->display();
    bptr->show();
    bptr = &d;
    bptr->display();
    bptr->show();
    return 0;
}