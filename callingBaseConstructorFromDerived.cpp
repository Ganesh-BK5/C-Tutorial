#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    int c;
    A(int y)
    {
        cout << "base class constructor" << endl;
        cout << y << endl;
        c = y;
        a = 0;
        b = 0;
    }
    A() {} // Default constructor
};
class B : A
{ // By default visibility mode is private
    int d;

public:
    B(int y) : A(y)
    {
        cout << "Derived class constructor called!!" << endl;
        cout << y << endl;
        d = y;
    }
    void display(void)
    {
        cout << d << endl;
    }
};
int main()
{
    B o1(5);
    o1.display();
    return 0;
}
// NOTE:
// A->B->C->D: if we call D constructor then first A constructor call then B and so on
// because
// In C++, when you create an object of a derived class,
// the base class part of the object needs to be initialized before the derived class part.
// This is because the derived class inherits from the base class, and the derived class constructor
//  relies on the base class being properly initialized before it can proceed
//  with its own initialization.