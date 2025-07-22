#include<bits/stdc++.h>
using namespace std;

vector<int> findPairSum(vector<int> vec, int target)
{
    int i = 0;
    int j = vec.size()-1;
    vector<int> ans;
    while (i < j)
    {
        if(vec[i]+vec[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (vec[i] + vec[j] < target){
            i++;
        }
        else if (vec[i] + vec[j] > target){
            j--;
        }
    }
    return ans;
}

int main(){
    vector<int> vec = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = findPairSum(vec, target);

    for(int i:ans){
        cout << i << ",";
    }
}