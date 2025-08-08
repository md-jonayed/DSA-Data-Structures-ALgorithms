#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &numbers, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (numbers[mid] < target)
        {
            return binarySearch(numbers, target, mid + 1, end);
        }
        else if (numbers[mid] > target)
        {
            return binarySearch(numbers, target, start, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    int target;
    cout << "Enter your target value: " << endl;
    cin >> target;
    int start = 0;
    int end = numbers.size() - 1;
    int result = binarySearch(numbers, target, start, end);

    if (result == -1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "Target found at index: " << result << endl;
    }
}