#include <bits/stdc++.h>
using namespace std;

int main()
{
    int line;
    cin >> line;
    int space = line - 1;
    // int num = ;
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        space--;
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        int num = i-1;
        for (int l = 2; l <= i; l++)
        {
            cout << num;
            num--;
        }
        cout << endl;
    }
}