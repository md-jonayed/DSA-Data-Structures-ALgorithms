#include <bits/stdc++.h>
using namespace std;
void swapMaxMin(int arr[], int size)
{
    int maxIndex = -1, minIndex = -1;
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minimum)
        {
            minimum = arr[i];
            minIndex = i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
    int temp = 0;
    temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
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

    swapMaxMin(arr, size);
}