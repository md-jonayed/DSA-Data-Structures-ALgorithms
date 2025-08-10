#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {3, 4, 5, 6, 7, 0, 1, 2};
    int left = 0;
    int right = numbers.size() - 1;
    int target;
    cin >> target;
    int flag = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (numbers[mid] == target)
        {
            // cout << "Target found at index: " << mid << endl;
            flag = mid;
            break;
        }
        if (numbers[left] <= numbers[mid])
        {
            // left sorted
            if (numbers[left] <= target && target <= numbers[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            // right sorted
            if (numbers[mid] <= target && target <= numbers[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    if (flag == -1)
    {
        cout << "Target not found" << endl;
    }
    else
    {
        cout << "Target found at index:" << flag << endl;
    }
}