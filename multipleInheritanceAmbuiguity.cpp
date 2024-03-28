#include <iostream>
using namespace std;
class A
{
public:
    void greet(void)
    {
        cout << "ji jaan lagao bete!!" << endl;
    }
};
class B
{
public:
    void greet(void)
    {
        cout << "Keep doing hard work son!!" << endl;
    }
};
class C : public A, public B
{
    int a;

public:
    void greet(void)
    {
        A::
            greet();
    }
};
int main()
{
    C obj;
    obj.greet();
    return 0;
}