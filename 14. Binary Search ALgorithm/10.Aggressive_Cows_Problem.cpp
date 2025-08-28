/*
You are given an array with unique elements of stalls[], which denote the positions of stalls. You are also given an integer k which denotes the number of aggressive cows. The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.

Examples:

Input: stalls[] = [1, 2, 4, 8, 9], k = 3
Output: 3
Explanation: The first cow can be placed at stalls[0],
the second cow can be placed at stalls[2] and
the third cow can be placed at stalls[3].
The minimum distance between cows in this case is 3, which is the largest among all possible ways.
*/
#include <bits/stdc++.h>
using namespace std;
bool validDistance(vector<int> &stalls, int noOfCows, int mid)
{
    int cow = 1;
    int lastStallPosition = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if ((stalls[i] - lastStallPosition) >= mid)
        {
            cow++;
            lastStallPosition = stalls[i];
        }
        if (cow == noOfCows)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};
    int noOfCows = 3;
    int start = 1;
    sort(stalls.begin(), stalls.end());
    int end = stalls[stalls.size() - 1] - stalls[0];
    end = end - start;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (validDistance(stalls, noOfCows, mid) == true)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << ans << endl;
}