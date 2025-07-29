#include<bits/stdc++.h>
using namespace std;

void changeA(int *a){
    *a = 91;
}

int main(){
    int a = 19;
    changeA(&a);
    cout << a << endl;
}