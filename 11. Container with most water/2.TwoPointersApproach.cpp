#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    int lp = 0;
    int rp = heights.size() - 1;
    int maxCapacity = 0;
    while (lp < rp)
    {
        int width = rp - lp;
        int length = min(heights[rp], heights[lp]);
        maxCapacity = max(maxCapacity, (width * length));

        heights[lp] < heights[rp] ? lp++ : rp--;
    }
    cout << maxCapacity << endl;
}
