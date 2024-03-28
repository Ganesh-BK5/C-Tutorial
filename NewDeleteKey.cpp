#include <iostream>
using namespace std;
int main()
{
    // Dynamically allocate memory for a single integer
    int *ptr = new int;
    *ptr = 5;

    // Dynamically allocate memory for an array of integers
    int size = 10;
    int *arr = new int[size];

    // Access and modify elements of the dynamically allocated array
    for (int i = 0; i < size; ++i)
    {
        arr[i] = i * 2;
    }
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << endl;
    }

    // Deallocate dynamically allocated memory to prevent memory leaks
    delete ptr;
    delete[] arr;

    return 0;
}
