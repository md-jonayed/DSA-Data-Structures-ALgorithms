#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxWater = 0;

    for (int i = 0; i < heights.size(); i++)
    {
        for (int j = i + 1; j < heights.size(); j++)
        {
            int height = min(heights[j], heights[i]);
            maxWater = max(maxWater, height * (j - i));
        }
    }

    cout << maxWater << endl;
}