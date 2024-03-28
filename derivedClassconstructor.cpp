#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
    A(int a, int b)
    {
        x = a;
        y = b;
        cout << "A constructor is called" << endl;
    }
    void printData(void)
    {
        cout << x << "and" << y << endl;
    }
};
class B
{
    int m, n;

public:
    B(int a, int b)
    {
        m = a;
        n = b;
        cout << "B constructor is called" << endl;
    }
    void printData(void)
    {
        cout << m << "and" << n << endl;
    }
};
class Derived : public B, virtual public A
{
    int o, p;

public:
    Derived(int a, int b, int c, int d, int e, int f) : A(a, b), B(c, d)
    {
        cout << "derived constructor called!" << endl;
        o = e;
        p = f;
    }
    void printData(void)
    {
        cout << o << "and" << p << endl;
    }
};
int main()
{
    Derived obj(1, 2, 3, 4, 5, 6);
    obj.printData();
    return 0;
}