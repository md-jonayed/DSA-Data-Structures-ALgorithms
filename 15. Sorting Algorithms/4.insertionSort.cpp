#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {4, 1, 5, 2, 3};
    for (int i = 1; i < nums.size();i++){
        int key = nums[i];
        int j = i - 1;
        while(j>=0 && nums[j]>key){
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }

    for(int n:nums){
        cout << n <<",";
    }
    cout << endl;
}

// time complexity of insertion sort is : O(n^2)