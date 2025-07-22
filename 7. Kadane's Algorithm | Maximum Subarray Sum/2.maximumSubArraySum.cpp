#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    int maximumSum = INT_MIN;
    for (int start = 0; start < vec.size(); start++)
    {
        int currentSum = 0;
        for (int end = start; end < vec.size(); end++)
        {
            currentSum = currentSum + vec[end];
            if(currentSum>maximumSum){
                maximumSum = currentSum;
            }
        }
    }

    cout << maximumSum << endl;
}