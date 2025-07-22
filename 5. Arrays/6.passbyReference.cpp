#include <bits/stdc++.h>
using namespace std;
void changeArray(int arr[], int size)
{
    cout << "Inside user defined function" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
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

    changeArray(arr, size);
    cout << "inside main function" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
}