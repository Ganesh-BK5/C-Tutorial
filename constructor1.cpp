#include <iostream>
using namespace std;
class xyz
{
    int a, b;

public:
    void print(void)
    {
        cout << a << b << endl;
    }
    // xyz(void); // constructor declaration//default constructor it accepts no parameters
};
// xyz::xyz(void)
// {
//     a = 0;
//     b = 0;
// }
int main()
{
    xyz ab;
    // cout << ab.a << ab.b << endl;//privarte member
    ab.print();
    return 0;
}