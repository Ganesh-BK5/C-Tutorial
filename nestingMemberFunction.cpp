#include <iostream>
using namespace std;
class OuterClass
{
public:
    void outerFunction()
    {
        cout << "Outer function" << endl;

        innerFunction(); // Call inner function from outer function
    }

private:
    void innerFunction()
    {
        cout << "Inner function" << endl;
    }
};

int main()
{

    OuterClass obj;
    obj.outerFunction(); // Call outer function

    return 0;
}
