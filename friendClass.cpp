#include <iostream>
using namespace std;

// Forward declaration of the complex class
class complex;

// Class for performing calculations on complex numbers
class calculate
{
public:
    // Function to calculate sum of real parts of two complex numbers
    int calc(complex c1, complex c2);
    int calc1(complex, complex);
};

// Class representing complex numbers
class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber(void)
    {
        cout << a << '+' << b << 'i' << endl;
    }

    // Friend function declaration with calculate class
    // individually making the function frien of calculate class
    // but this is going to tedious job so we can make it friend
    // friend int calculate::calc(complex, complex);
    // friend int calculate::calc1(complex, complex);
    friend class calculate;//alternative method
    
};

// Function definition for calc method of calculate class
int calculate::calc(complex c1, complex c2)
{
    return (c1.a + c2.a);
}
int calculate::calc1(complex d1, complex d2)
{
    return (d1.b + d2.b);
}

// Main function
int main()
{
    complex a1, b1;
    a1.setnumber(2, 1);
    b1.setnumber(3, 4);
    calculate cc;
    int res = cc.calc(a1, b1);
    int resc = cc.calc1(a1, b1);
    cout << res << endl; // Output: 5 (sum of real parts)
    cout << resc << endl;
    return 0;
}
