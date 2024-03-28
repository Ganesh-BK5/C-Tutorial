#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_roll(int a)
    {
        roll_no = a;
    }
    void print_roll(void)
    {
        cout << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float math, science;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        science = m2;
    }
    void print_marks(void)
    {
        cout << math << " " << science << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float x)
    {
        score = x;
    }
    void print_score(void)
    {
        cout << score << endl;
    }
};
class Result : public Test, public Sports
{
    float total;

public:
    void print_result(void)
    {
        total = math + science + score;
        print_roll();
        print_marks();
        print_score();
        cout
            << total << endl;
    };
};
int main()
{
    Result t;
    t.set_marks(56.0, 76.9);
    t.set_roll(5);
    t.set_score(45.7);
    t.print_result();

    return 0;
}