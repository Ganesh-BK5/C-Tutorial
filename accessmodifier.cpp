#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); // only declaring function;
    void getdata()
    {
        cout << a + b + c + d + e << endl;
    }
};
void employee::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    class employee ob1;
    ob1.d = 44;
    // ob1.a = 44; // throws erro as it is private member
    ob1.e = 55;
    ob1.setdata(3, 5, 5);
    ob1.getdata();
}