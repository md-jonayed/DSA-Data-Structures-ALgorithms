#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> prices = {7, 2, 5, 3, 6, 4, 8};
    int buy = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (buy > prices[i])
        {
            buy = min(buy, prices[i]); // 7or1=1,
        }
        profit = max(profit, (prices[i] - buy));
    }

    cout << profit << endl;
}
