#include <bits/stdc++.h>
using namespace std;

void reverseVector(vector<int> &vec)
{
    for (int i = 0; i < vec.size() / 2; i++)
    {
        int temp;
        temp = vec[i];
        vec[i] = vec[vec.size() - 1 - i];
        vec[vec.size() - 1 - i] = temp;
    }

    for (int val : vec)
    {
        cout << val << ",";
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    for (int val : vec)
    {
        cout << val << ",";
    }
    cout << endl;
    reverseVector(vec);
    cout << endl;
    for (int val : vec)
    {
        cout << val << ",";
    }
}