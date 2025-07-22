#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 2, 1, 2};
    sort(vec.begin(), vec.end());

    int frequency = 1;
    int ans = vec[0];

    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] == vec[i - 1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
            ans = vec[i];
        }

        if (frequency > (vec.size()) / 2)
        {
            cout << ans << endl;
        }
    }
}