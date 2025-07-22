#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrimes(int number)
{
    for (int i = 1; i <= number; i++)
    {
        bool num=isPrime(i);
        if(num==true){
            cout << i<<" ";
        }
    }
}

int main()
{
    int number;
    cin >> number;
    printPrimes(number);
}