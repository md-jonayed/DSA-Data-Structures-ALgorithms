#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;
    // cout << *(arr + 5) << endl;
    // array pointrs are constant pointers which we can not change though out our code

    int b[] = {1, 2, 3, 4};

    int *ptr = b;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;
    ptr++;
    cout << *ptr << endl;
    
}