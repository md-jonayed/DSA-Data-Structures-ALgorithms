#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int> ans;
    int mul = 1;
    for (int v : vec)
    {
        mul = mul * v;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        ans.push_back(mul / vec[i]);
    }
    for (int v : ans)
    {
        cout << v << endl;
    }
}