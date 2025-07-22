#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    xor ---> 1 xor 1=0
             1 xor 0=1
             0 xor 1=1
             0 xor 0=0

             n xor 0 = n
             n xor n = 0
    */

    vector<int> vec = {1, 2, 2, 3, 3};
    int ans = 0;
    for (int val : vec)
    {
        ans = ans ^ val;
    }
    cout << ans;
}