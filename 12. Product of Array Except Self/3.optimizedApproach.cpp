#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    int n = vec.size();

    vector<int> prefix(n);
    vector<int> suffix(n);

    prefix[0] = 1;
    suffix[n - 1] = 1;

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * vec[i - 1];
    }

    for (int j = n - 2; j >= 0; j--)
    {
        suffix[j] = suffix[j + 1] * vec[j + 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] * suffix[i] << endl;
    }
}
