#include<bits/stdc++.h>
using namespace std;
void reverseNumber(int number){
    int ogNumber = number;
    int sum = 0;
    int pow = 1;
    while(number>0){
        int rem = number % 10;
        number = number / 10;
        sum = sum * 10 + rem;
    }
    cout << ogNumber << " is reversed to " << sum << endl;
}
int main(){
    int number;
    cin >> number;
    reverseNumber(number);
}