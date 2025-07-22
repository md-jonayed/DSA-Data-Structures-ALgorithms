#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    // Handle edge case for 0, which is not a power of 2
    if (n <= 0)
        return false;

    // Keep dividing by 2 until the number becomes 1
    while (n % 2 == 0)
    {
        n /= 2;
    }

    // If the number becomes 1, it's a power of 2
    return n == 1;
}

int main()
{
    int number;
    cin >> number;

    if (isPowerOfTwo(number))
        cout << number << " is a power of 2." << endl;
    else
        cout << number << " is NOT a power of 2." << endl;

    return 0;
}
