#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int value = 1;
    for (int i = 1; i <= n; i++)
    {
        value = value * i;
    }
    return value;
}

float nCr(int n, int r)
{
    int factN = factorial(n);
    int factR = factorial(r);
    int factN_R = factorial(n - r);

    float val = factN / (factR * factN_R);
    return val;
}

int main()
{
    int n, r;
    cin >> n;
    cin >> r;
    cout << nCr(n, r) << endl;
}