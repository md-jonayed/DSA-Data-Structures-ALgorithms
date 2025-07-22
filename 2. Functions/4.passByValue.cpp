#include<bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    a = a + 10;
    b = b + 10;
    return a + b;
}

int main(){
    int a = 5, b = 3;
    cout << sum(a, b) << endl;
    cout << a <<","<< b << endl;
}

// whether we change the values in the function it doesn't change in the main function 