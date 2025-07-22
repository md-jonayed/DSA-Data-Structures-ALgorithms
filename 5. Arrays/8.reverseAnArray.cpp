#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;

    for (int i = 0, j = size - 1; i != j;i++,j--){
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < size;i++){
        cout << arr[i] << ",";
    }
}