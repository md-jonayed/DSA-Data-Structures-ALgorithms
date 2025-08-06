#include <bits/stdc++.h>
using namespace std;

int findNumber(vector<int> &num, int target)
{
    int last = num.size() - 1;
    int first = 0;
    while (first <= last)
    {
        int mid = (last + first) / 2;
        if (num[mid] == target)
        {
            return mid;
        }
        else if (target > num[mid])
        {
            first = mid + 1;
        }
        else if (target < num[mid])
        {
            last = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // real life binary search example is searching word in a dictionary
    // it only applicable only on sorted array

    vector<int> numbers = {1, 2, 3, 4, 5};
    int target;
    cin >> target;
    int result = findNumber(numbers, target);

    if (result != -1)
    {
        cout << "Target found at index: " << result << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }
}