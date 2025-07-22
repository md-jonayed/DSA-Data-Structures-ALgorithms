#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>&vec, int target){
    for (int i = 0; i < vec.size();i++){
        if(vec[i]==target){
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec;
    for (int i = 0; i < 5;i++){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    int target;
    cin >> target;
    int index = linearSearch(vec,target);

    if(index==-1){
        cout << "target value " << target << " not found";
    }
    else{
        cout << "target value " << target << " found at index: "<<index<<endl;
    }
}