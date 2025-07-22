#include <bits/stdc++.h>
using namespace std;

double binaryExponentiation(double number, int power)
{
    if (power == 0)
    {
        return 1.0;
    }
    if (power == 1)
    {
        return number;
    }
    if (number == 0)
    {
        return 0.0;
    }
    if (number == 1)
    {
        return 1.0;
    }
    if (number == -1 && power % 2 == 0)
    {
        return 1.0;
    }
    if (number == -1 && power % 2 != 0)
    {
        return -1.0;
    }
    if (power < 0)
    {
        number = 1 / number;
        power = -power;
    }
    double ans = 1;
    long binaryForm = power; // 5

    while (binaryForm > 0) // 5>0 2>0 1>0 0>0 false
    {
        if (binaryForm % 2 == 1) // 5%2=1 2%2=0 1%2=1
        {
            ans = ans * number; // 1*3=3, 3*81=243
        }
        number = number * number;    // 3*3=9 9*9=81, 81*81
        binaryForm = binaryForm / 2; // 5/2=2 2/2=1 1/2=0
    }

    return ans;
}

int main()
{
    double number;
    cin >> number;
    double power;
    cin >> power;
    double result = binaryExponentiation(number, power);

    cout << "result is : " << result << endl;
}