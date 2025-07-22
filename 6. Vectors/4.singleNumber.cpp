#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 3, 3, 4};
    vector<int> ans;
    for (int value : nums)
    {
        int count = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (value == nums[i])
            {
                count++;
            }
        }

        if (count <2)
        {
            ans.push_back(value);
        }
    }

    for (int val : ans)
    {
        cout << val << ",";
    }
}