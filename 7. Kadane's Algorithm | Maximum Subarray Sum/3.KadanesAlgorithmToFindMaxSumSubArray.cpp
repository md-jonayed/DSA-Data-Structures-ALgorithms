#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        currentSum = currentSum + vec[i]; //-2,0+1=1,1-3=-2,0+4=4,4-1=3,3+2=5,5+1=6,6-5?=1,1+4=5
        if (maxSum < currentSum)
        {
            maxSum = currentSum; //-2->1->1>-2=1,1>4?=4,4>3?=4,5>4?=5,5>6?=6,1>6?=6,6>5?=6
        }
        if (currentSum < 0)
        { //-2,-2,4,3,5,6,1,6
            currentSum = 0;
        }
    }
    cout << maxSum << endl;
}