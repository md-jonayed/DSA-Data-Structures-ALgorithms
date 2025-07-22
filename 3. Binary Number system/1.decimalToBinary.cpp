#include <bits/stdc++.h>
using namespace std;
int decimalToBinary(int number)
{
    int ans = 0;
    int power = 1;
    while (number > 0)
    {
        int remainder = number % 2;
        number = number / 2;
        ans = ans + remainder * power;
        power = power * 10;
    }
    return ans;
}
int main()
{
    // int decimalNumber;
    // cin >> decimalNumber;
    for (int i = 1; i <= 11; i++)
    {
        cout << i << "'s binary is " << decimalToBinary(i) << endl;
    }
}