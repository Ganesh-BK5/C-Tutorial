#include <iostream>
using namespace std;
class Y;
class X
{
    int num;

public:
    void getdata(int a)
    {
        num = a;
    }
    friend void add(X, Y);
};
class Y
{
    int data;

public:
    void getdata(int a)
    {
        data = a;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << o1.num + o2.data << endl;
}
int main()
{
    X a1;
    a1.getdata(3);
    Y a2;
    a2.getdata(5);
    add(a1, a2);
    return 0;
}
