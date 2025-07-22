#include <bits/stdc++.h>
using namespace std;

int main()
{
    int line;
    cin >> line;
    // for (int i = 0; i < line; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= line;i++){
    //     for (int j = 1; j <= i;j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // char ch = 'A';
    // for (int i = 1; i <= line; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }
    // for (int i = 1; i <= line;i++){
    //     for (int j = 1;j<=i;j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= line; i++)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // int num = 1;
    // for (int i = 1; i <= line; i++)
    // {
    //     for (int j = 1; j <= i;j++){
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    char ch = 'A';
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}