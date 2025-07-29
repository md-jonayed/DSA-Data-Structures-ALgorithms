#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *ptr1 = &a;        // pointer variable stores address of another variable
    cout << a << endl;     // value of a variable
    cout << &a << endl;    // address of a variable
    cout << ptr1 << endl;  // address of a variable
    cout << &ptr1 << endl; // address of pointer variable

    float price = 12.34;
    float *ptr2 = &price;
    cout << &price << endl;
    cout << ptr2 << endl;

    // dereference operator gives us value at a certain address
    cout << *(&price) << endl;
    cout << *ptr2 << endl;

    int j = 19;
    int *p = &j;
    int **parentOfP = &p;
    cout << j << "," << p << endl;
    cout << &j << "," << *p << endl;
    cout << &p << "," << *parentOfP << endl;
    cout << **parentOfP << endl;

    // we can not dereference null pointer

    int *pt = NULL;
    // cout << *pt << endl;
    cout << pt << endl;

    int x = 11;
    int *y = &x;
    int **z = &y;

    cout << x << endl;
    cout << *y << endl;
    cout << **z << endl;

    cout << &x << endl;
    cout << y << endl;
    cout << *z << endl;
}