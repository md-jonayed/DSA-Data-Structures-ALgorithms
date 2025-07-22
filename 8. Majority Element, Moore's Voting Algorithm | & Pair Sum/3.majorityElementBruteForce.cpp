#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec = {2, 2, 2, 1, 1};

    for(int number:vec){
        int frequency = 0;
        for(int element:vec){
            if(element==number){
                frequency++;
            }
        }
        if(frequency>(vec.size())/2){
            cout << number << endl;
            break;
        }
    }
}