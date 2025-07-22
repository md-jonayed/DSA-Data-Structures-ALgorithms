#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {2, 7, 11, 15};
    vector<int> indices;
    int target;
    cin >> target;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size();j++){
            if(vec[i]+vec[j]==target){
                indices.push_back(i);
                indices.push_back(j);
            }
        }
    }
    for(int index:indices){
        cout << index << ",";
    }
}