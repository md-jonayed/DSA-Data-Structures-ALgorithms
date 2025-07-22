#include<bits/stdc++.h>
using namespace std;

void sum(int n){
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    cout << "Total sum:" << s << endl;
}

int main(){
    int n;
    cout << "enter desired number";
    cin >> n;
    sum(n);
}