#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {4, 1, 5, 2, 3};
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[smallestIndex];
        nums[smallestIndex] = temp;
    }

    for(int n:nums){
        cout << n << ",";
    }
    cout << endl;
}

// time complexity of selection sort is O(n^2)