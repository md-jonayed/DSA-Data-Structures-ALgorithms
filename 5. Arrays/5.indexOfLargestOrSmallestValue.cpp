#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int * arr = new int [size];
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int largeIndex = -1, smallIndex = -1;

    for (int i = 0; i < size;i++){
        if(arr[i]>largest){
            largest = arr[i];
            largeIndex = i;
        }
        if(arr[i]<smallest){
            smallest = arr[i];
            smallIndex = i;
        }
    }
    cout << "largest value: " << largest << " & largest valued index: " << largeIndex << endl;
    cout << "smallest value: " << smallest << " & smallest valued index: " << smallIndex << endl;
}