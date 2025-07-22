#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int number)
{
    int rem;
    int sum = 0;
    while (number > 0)
    {
        rem = number % 10;
        sum = sum + rem;
        number = number / 10;
    }
    return sum;
}

int main(){
    int number;
    cin >> number;
    cout << sumOfDigits(number) << endl;
}