#include <iostream>
using namespace std;
class car
{
    int speed;

public:
    car() { speed = 0; };
    car(int a)
    {
        speed = a;
    }
    // when no copy constructor is found compiler suppplies its own copy constructor
    car(car &obj)
    {
        cout << "Copy constructor called" << endl;
        speed = obj.speed;
    }
    void displayr(void)
    {
        cout << speed << endl;
    }
};
int main()
{
    car x, y, z(44), z3;
    x.displayr();
    y.displayr();
    z.displayr();
    car z1(z); // copy constructor called
    z1.displayr();
    car z2(x);
    z2.displayr();

    z3 = z; // copy constructor not invoked
    z3.displayr();
    car z4 = z; // copy constructor will invoked

    return 0;
}