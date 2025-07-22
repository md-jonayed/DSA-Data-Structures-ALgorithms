#include <bits/stdc++.h>
using namespace std;

// moor's algorithm to find majority element in an array.
int main()
{
    vector<int> vec = {1, 2, 2, 2, 1};
    int fr = 0, ans = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (fr == 0)
        {
            ans = vec[i];
        }

        if (ans == vec[i])
        {
            fr++;
        }
        else
        {
            fr--;
        }
    }

    int count = 0;
    for (int val : vec)
    {
        if (ans == val)
        {
            count++;
        }
    }
    if (count > (vec.size()) / 2)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}