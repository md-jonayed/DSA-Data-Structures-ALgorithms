#include<bits/stdc++.h>
using namespace std;

void changeA(int &b){
    b = 31;
}

int main(){
    int a = 10;

    changeA(a);

    cout << a << endl;
}

/*
pass by reference in c++ is possible using pointers as well as using alias.
*/