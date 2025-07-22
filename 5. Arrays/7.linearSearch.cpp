#include <bits/stdc++.h>
using namespace std;
// time complexity O(n)
int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int index = linearSearch(arr, size, target);

    if (index == -1)
    {
        cout << "target value: " << target << " not found" << endl;
    }
    else
    {
        cout << "Target value: " << target << " found at index: " << index << endl;
    }
}