#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    // int numbers[size];
    int *numbers = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }
    cout << "largest number: " << maximum << endl;
    delete[] numbers;
}