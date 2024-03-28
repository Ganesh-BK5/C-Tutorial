#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    point(int a) // constructor overloading
    {
        x = a;
        y = 0;
    }
    void printvalue(void)
    {
        cout << x << "," << y << endl;
    }
};
int main()
{
    point a1(4, 6);
    point a2(5); // the constructor whose arguments list is matching will be invoked
    a1.printvalue();
    a2.printvalue();
    return 0;
}