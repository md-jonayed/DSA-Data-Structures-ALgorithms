#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int number;
    // cin >> number;
    // for (int i = 0; i < number; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < number; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // int row;
    // cin >> row;
    // int num = 1;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row;j++){
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    //hw
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}