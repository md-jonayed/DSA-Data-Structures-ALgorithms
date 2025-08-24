/*
Given an array arr[] and k, where the array represents the boards and each element of the given array represents the length of each board. k numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint. The task is to find the minimum time to get this job done by painting all the boards under the constraint that any painter will only paint the continuous sections of boards. say board [2, 3, 4] or only board [1] or nothing but not board [2, 4, 5].

Examples:

Input: arr[] = [5, 10, 30, 20, 15], k = 3
Output: 35
Explanation: The most optimal way will be: Painter 1 allocation : [5,10], Painter 2 allocation : [30], Painter 3 allocation : [20, 15], Job will be done when all painters finish i.e. at time = max(5 + 10, 30, 20 + 15) = 35

Input: arr[] = [10, 20, 30, 40], k = 2
Output: 60
Explanation: The most optimal way to paint: Painter 1 allocation : [10, 20, 30], Painter 2 allocation : [40], Job will be complete at time = 60
*/

#include <bits/stdc++.h>
using namespace std;

bool minimumTimeToPaint(vector<int> &nums, int painters, int maximumTimeAllowed)
{
    int p = 1;
    int time = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (time + nums[i] <= maximumTimeAllowed)
        {
            time = time + nums[i];
        }
        else
        {
            p++;
            time = nums[i];
        }
    }
    if (p <= painters)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<int> nums = {40, 30, 10, 20};
    int painters = 2;

    int maximum = INT_MIN;
    for (int n : nums)
    {
        if (maximum <= n)
        {
            maximum = n;
        }
    }

    int sum = 0;
    for (int n : nums)
    {
        sum = sum + n;
    }
    int start = maximum;
    int end = sum;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (minimumTimeToPaint(nums, painters, mid) == true)
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << ans << endl;
}