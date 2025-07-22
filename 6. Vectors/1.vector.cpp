#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5,6};
    cout << vec[0] << endl;

    vector<int> v(3, 9);
    cout << v[0]<<","<<v[1] << endl;

    for(int i:v){
        cout << i << ",";
    }
}