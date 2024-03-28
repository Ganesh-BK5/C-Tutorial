#include <iostream>
using namespace std;
class xyz
{
    int a, b;

public:
    xyz(int, int);
    void print(void)
    {
        cout << a << b << endl;
    }
    // constructor declaration
};
xyz::xyz(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    xyz ab(12, 22);      // implicit call
    xyz abc = xyz(1, 2); // explicit call
    // cout << ab.a << ab.b << endl;//privarte member
    ab.print();
    abc.print();
    return 0;
}