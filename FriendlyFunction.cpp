#include <iostream>
using namespace std;
class banker
{
    int a;
    int b;

public:
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void xyz(banker xx);
};
void xyz(banker xx)
{
    cout << xx.a << "and" << xx.b << endl;
}
int main()
{
    banker ob;
    ob.getData(4, 5);
    xyz(ob);
    return 0;
    //HELLO MY FRIEND
}
