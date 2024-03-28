#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};
class derived : public base
{
public:
    void display(void)
    {
        cout << a << endl;
    }
};
int main()
{
    derived d;
    d.display();
    return 0;
}
// }
//                     public derivation    private derivation    protected derivation
// private members    not inherited            not inherited       not inherited
// public members     public                      private             protected
// protected members  protected                    private             protected