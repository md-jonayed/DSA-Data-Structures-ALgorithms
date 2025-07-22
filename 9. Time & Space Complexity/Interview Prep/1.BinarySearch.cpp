#include <bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> vec, int targetVal)
{
    int size = vec.size();
    int first = 0;
    int last = size-1;

    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (vec[mid] > targetVal)
        {
            last = mid - 1;
        }
        else if (vec[mid] < targetVal)
        {
            first = mid + 1;
        }
        else
        {
            cout << "Target " << targetVal << " found at index: " << mid << endl;
            return;
        }
    }
    cout << "Target " << targetVal << " not found "<< endl;
}

int main()
{
    vector<int> vec = {1, 5, 2, 4, 3};
    sort(vec.begin(), vec.end());
    // {1,2,3,4,5}
    int targetVal;
    cin >> targetVal;

    binarySearch(vec, targetVal);
}