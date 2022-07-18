#include <iostream>

using namespace std;

class Base 
{
    public:
        int a, b, c;
};

class Derived : public Base
{
    public:
        int b2;
};

class Derived2 : public Derived 
{
    int c2;
};


int main()
{
    Derived derived;
    Derived2 deriv2;
    derived.a = 1;
    derived.b2 = 20;
    deriv2.b = 30;
    deriv2.b2 = 40;

    cout << "Value from derived class: "<< derived.a << endl;
 
    cout << "Value from derived class: "
        << derived.b2 << endl;

    cout << "Value from base class through derive2 class: "
        << deriv2.b << endl;

    cout << "Value from 1st derived class : "
        << deriv2.b2 << endl;

    return 0;
}