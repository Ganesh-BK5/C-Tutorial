#include <iostream>
using namespace std;
class hero
{
    int a;
    static int b;

public:
    void hello(void)
    {
        int x;
        cin >> x;
        a = x;
        b++;
    }
    static void hello2(void)
    {
        cout << b << endl;
        //cout << a << endl;
    }
};
int hero::b = 10;
int main()
{
    hero a1, a2, a3;
    a1.hello();
    a2.hello();
    a3.hello();
    hero::hello2();
}