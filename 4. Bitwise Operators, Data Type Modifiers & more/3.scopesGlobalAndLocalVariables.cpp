#include <bits/stdc++.h>
using namespace std;
int globalVar = 10; // global variable
void fun()
{
    int localVar = 20; // local variable
    cout << "Global Variable:" << globalVar << endl;
    cout << "Local Variable:" << localVar << endl;
}
int main()
{
    fun();
    cout << "Global Variable:" << globalVar << endl;
    // cout << "Local Variable:" << localvar << endl;
}