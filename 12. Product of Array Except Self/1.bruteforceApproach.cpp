#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4};
    vector<int> ans;
    for (int i = 0; i < vec.size(); i++)
    {
        int multiplication = 1;
        for (int j = 0; j < vec.size();j++){
            
            if (i == j)
            {
                continue;
            }
            else{
                multiplication = multiplication * vec[j];
            }
        }
        ans.push_back(multiplication);
    }
    for(int v:ans){
        cout << v << endl;
    }
}