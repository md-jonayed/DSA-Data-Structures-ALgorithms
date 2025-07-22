#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }
    cout << "smallest number is: " << smallest << " & largest number is: " << largest << endl;
}