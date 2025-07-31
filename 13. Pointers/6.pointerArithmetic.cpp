#include <bits/stdc++.h>
using namespace std;
int main()
{
    // when we increment or decrement a pointer it actually increase the pointer's memory size
    // for instance  if our pointer variable is type of integer and its memory is 100 if we perform ++ operation then it's memory size will incrrease to 104
    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    cout << *ptr << endl;
    ptr++;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    ptr--;
    cout << ptr << endl;
    int b = 23;
    int *pt = &b;
    cout << pt << endl;
    pt = pt + 2;
    cout << pt << endl;

    // pointer to pointer addition is not posisble but subtraction can be done which gives how much memory bytes are avilable in between 2 pointers

    int *p1;
    int *p2 = p1 + 2;
    cout << p2 - p1 << endl;  // it gives results in bytes.

    cout << (p1 < p2) << endl; // 1 means true 
}