#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 5, 2, 4, 3};

    for (int i = 0; i < nums.size() - 1; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < nums.size() - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                isSwapped = true;
            }
        }
        if (isSwapped == false)
        {
            break;
        }
    }

    for (int i : nums)
    {
        cout << i << ",";
    }
    cout << endl;
}