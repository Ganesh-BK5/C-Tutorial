#include <iostream>
using namespace std;
// static int count;
class employee
{
    static int count;

public:
    void setdata(void)
    {
        count++;
    }
    void getdata(void)
    {
        cout << count;
    }
};
int employee::count = 10; // always we should give the reference to the static variable
// outside the class and it is initialized with zero by default
// if we want to initialize with another value we can mention as count =10;
int main()
{
    employee o1, o2, o3;
    o1.setdata();
    o2.setdata();
    o1.getdata();
    o1.getdata();
    o3.setdata();
    o1.getdata();
}