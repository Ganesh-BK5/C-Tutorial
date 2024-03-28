#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    void getdata(int x)
    {
        a = x;
    }
    void putdata(void)
    {
        cout << a << endl;
    }
    friend void exchange(A &, B &);
};
class B
{
    int b;

public:
    void getdata(int y)
    {
        b = y;
    }
    void putdata(void)
    {
        cout << b << endl;
    }
    friend void exchange(A &, B &);
};
void exchange(A &c1, B &c2)
{
    int temp = c1.a;
    c1.a = c2.b;
    c2.b = temp;
}
int main()
{
    // cout << "ganesh" << endl;
    A o1;
    B o2;
    o1.getdata(4);
    o2.getdata(5);
    exchange(o1, o2);
    o1.putdata();
    o2.putdata();
    return 0;
}