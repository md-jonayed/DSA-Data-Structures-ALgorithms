#include<bits/stdc++.h>
using namespace std;
void caculateSumAndProduct(int arr[],int size){
    int sum = 0, product = 1;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }
    cout << "sum: " << sum << ", product: " << product << endl;
}
int main(){
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }

    caculateSumAndProduct(arr, size);
}