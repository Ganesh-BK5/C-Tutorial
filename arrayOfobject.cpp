#include <iostream>
using namespace std;
const int size = 3;
class employee
{
    int salary;
    int emp_id;

public:
    void getData(void)
    {
        salary = 2000;
        cin >> emp_id;
    }
    void outData(void)
    {
        cout << "Salary" << salary << endl;
        cout << "Id=" << emp_id << endl;
    }
};
int main()
{
    employee ob[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter details of employee :" << i + 1 << endl;
        ob[i].getData();
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Details of employee :" << i + 1 << endl;
        ob[i].outData();
        cout << endl;
    }
    return 0;
}