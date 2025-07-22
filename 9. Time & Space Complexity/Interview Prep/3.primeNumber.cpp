#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number <= 1)
    {
        cout << number << " is not prime" << endl;
        return 0;
    }

    bool isPrime = true; // Assume it's prime unless proven otherwise

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break; // No need to check further
        }
    }

    if (isPrime)
    {
        cout << number << " is prime" << endl;
    }
    else
    {
        cout << number << " is not prime" << endl;
    }

    return 0;
}
