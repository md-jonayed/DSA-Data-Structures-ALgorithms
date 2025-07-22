// #include <bits/stdc++.h>
// using namespace std;

// int converToBinary(int power)
// {
//     int ans = 0;
//     int p = 1;
//     while (power > 0)
//     {
//         int remainder = power % 2;
//         ans = ans + remainder * p;
//         p = p * 10;
//         power = power / 2;
//     }
//     return ans;
// }

// int main()
// {
//     int number, power;
//     cin >> number;
//     cin >> power;

//     int binary = converToBinary(power);
//     cout << binary << endl;
//     int ans;
//     while (binary > 0)
//     {
//         int rem = binary % 10;
//         if (rem == 1)
//         {
//             ans = ans * number;
//         }
//         number = number * number;
//         binary = binary / 10;
//     }

//     cout << ans << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number, power;
    cin >> number >> power;

    int ans = 1;
    while (power > 0)
    {
        if (power % 2 == 1)
        {
            ans = ans * number;
        }
        number = number * number;
        power = power / 2;
    }

    cout << ans << endl;
    return 0;
}
