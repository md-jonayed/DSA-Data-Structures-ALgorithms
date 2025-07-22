#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }

    //bubble sort

    for (int i = 0; i < size - 1;i++){
        for (int j = 0; j < size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int i = 0; i < size;i++){
        cout << arr[i] << ",";
    }
}

/*
Initial array: [5, 3, 1, 4]

Pass 1:
  Compare 5 and 3 → swap → [3, 5, 1, 4]
  Compare 5 and 1 → swap → [3, 1, 5, 4]
  Compare 5 and 4 → swap → [3, 1, 4, 5]

Pass 2:
  Compare 3 and 1 → swap → [1, 3, 4, 5]
  Compare 3 and 4 → OK
  Compare 4 and 5 → OK

Pass 3:
  Compare 1 and 3 → OK
  Compare 3 and 4 → OK

Sorted: [1, 3, 4, 5]

*/