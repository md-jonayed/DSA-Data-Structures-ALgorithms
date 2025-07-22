#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &vec, int first, int last, int target)
{
    if (first > last)
    {
        return -1; // Target not found
    }

    int mid = first + (last - first) / 2;

    if (vec[mid] == target)
    {
        return mid;
    }
    else if (vec[mid] > target)
    {
        return binarySearch(vec, first, mid - 1, target);
    }
    else
    {
        return binarySearch(vec, mid + 1, last, target);
    }
}

int main()
{
    vector<int> vec = {1, 5, 2, 4, 3};
    sort(vec.begin(), vec.end()); // Sorted: {1, 2, 3, 4, 5}

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int index = binarySearch(vec, 0, vec.size() - 1, target);

    if (index == -1)
    {
        cout << "Target value not found" << endl;
    }
    else
    {
        cout << "Target value found at index: " << index << endl;
    }
}
