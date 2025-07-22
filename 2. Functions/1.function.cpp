#include <bits/stdc++.h>
using namespace std;

// function defination :
void printHello(int num)
{
    cout << "print hellow: " << num << endl;
}

int sum(int a, int b)
{
    return a + b;
}

int findMin(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    printHello(2);
    cout << sum(23, 32) << endl;
    cout << findMin(100, 101) << endl;
}