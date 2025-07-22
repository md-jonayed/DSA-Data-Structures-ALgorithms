#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptr1 = &a; // pointer variable stores address of another variable
    cout << a << endl; // value of a variable
    cout << &a << endl; // address of a variable 
    cout << ptr1 << endl; // address of a variable
    cout << &ptr1 << endl; // address of pointer variable

    float price = 12.34;
    float *ptr2 = &price;
    cout << &price << endl;
    cout << ptr2 << endl;
}