#include<bits/stdc++.h>
using namespace std;

int main(){
    int line;
    cin >> line;
    // int space = 0;
    // int num = line;
    // for (int i = 1; i <=line; i++)
    // {
    //     for (int j = 1; j <=space;j++){
    //         cout << " ";
    //     }
    //     space++;
    //     for (int k = 1; k <=num; k++)
    //     {
    //         cout << i;
    //     }
    //     num--;
    //     cout << endl;
    // }
    int space = 0;
    int num = line;
    char ch = 'A';
    for (int i = 1; i <= line;i++){
        for (int j = 1; j <= space;j++){
            cout << " ";
        }
        space++;
        for (int k = 1; k <= num;k++){
            cout << ch;
        }
        ch++;
        num--;
        cout << endl;
    }
}