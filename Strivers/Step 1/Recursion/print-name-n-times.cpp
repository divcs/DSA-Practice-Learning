#include <iostream>
using namespace std;

void printName(int i, int n)
{
    if (i > n)
        return;
    cout << "Divya" << endl;
    printName(i + 1, n);
}

int main()
{
    int n, i;
    cout << "Enter the number of times name is to be printed:";
    cin >> n;

    printName(i = 1, n);
    // Your code goes here

    return 0;
}