#include <iostream>
using namespace std;
class time
{
    int hrs;
    int minutes;

public:
    void getData(int h, int m)
    {
        hrs = h;
        minutes = m;
    }
    void putData(void)
    {
        cout << hrs << "hours and " << minutes << " minutes" << endl;
    }
    void sum(time, time);
};
void time::sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hrs = minutes / 60;
    minutes = minutes % 60;
    hrs = hrs + t1.hrs + t2.hrs;
}
int main()
{
    time T1, T2, T3;
    T1.getData(2, 15);
    T2.getData(3, 45);
    T3.sum(T1, T2);
    T3.putData();
}