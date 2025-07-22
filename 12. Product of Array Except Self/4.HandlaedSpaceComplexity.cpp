#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans(nums.size(), 1);
    //vector<int> ans = {1, 1, 2, 6};
    for (int i = 1; i < nums.size(); i++)
    {
        ans[i] = ans[i-1] * nums[i - 1]; //1*1,1*2,2*3 
    }

    int suffix = 1;
    // vector<int> ans = {1, 1, 2, 6};
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        ans[i] = suffix * ans[i];
        suffix = suffix * nums[i];
        
    }

    for(int a:ans){
        cout << a << endl;
    }
}