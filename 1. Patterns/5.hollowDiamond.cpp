#include <bits/stdc++.h>
using namespace std;

int main()
{
    int line;
    cin >> line;
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= line - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = line - 1; i >= 1; i--)
    {
        for (int j = 1; j <= line - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}