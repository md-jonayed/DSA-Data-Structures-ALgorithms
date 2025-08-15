#include <bits/stdc++.h>
using namespace std;

int findSingleNumber(vector<int> &numbers)
{
    int n = numbers.size();
    if (n == 1)
    {
        return numbers[0];
    }
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (mid == 0 && numbers[0] != numbers[1])
        {
            return numbers[mid];
        }
        if (mid == n - 1 && numbers[n - 1] != numbers[n - 2])
        {
            return numbers[mid];
        }
        if (numbers[mid - 1] != numbers[mid] && numbers[mid] != numbers[mid + 1])
        {
            return numbers[mid];
        }
        if (mid % 2 == 0)
        {
            if (numbers[mid - 1] == numbers[mid])
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
            if (numbers[mid - 1] == numbers[mid])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> numbers = {1, 1,2, 3, 3, 4, 4, 8, 8};
    int result = findSingleNumber(numbers);
    if (result == -1)
    {
        cout << "Single number not found" << endl;
    }
    else
    {
        cout << "single number is: " << result << endl;
    }
}