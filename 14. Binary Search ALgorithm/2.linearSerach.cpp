#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 5, 2, 4, 3};
    int target;
    cin >> target;
    for (int i = 0; i < vec.size(); i++)
    {
        if (target == vec[i])
        {
            cout << "target found at index: " << i << endl;
            break;
        }
    }
    // linear search has time complexity of O(n)
}