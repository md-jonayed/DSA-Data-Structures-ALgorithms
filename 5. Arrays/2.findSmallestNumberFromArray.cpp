#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int numbers[size];
    for (int i = 0; i < size;i++){
        cin >> numbers[i];
    }
    int minimum = INT_MAX;
    for (int i = 0; i < size;i++){
        if(numbers[i]<=minimum){
            minimum = numbers[i];
        }
    }
    cout << "Smallest number is : " << minimum << endl;
}