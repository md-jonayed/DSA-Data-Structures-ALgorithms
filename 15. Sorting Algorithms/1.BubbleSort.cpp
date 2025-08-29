#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers = {4, 1, 5, 2, 3};
    int size = numbers.size();

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for(int i:numbers){
        cout << i<<",";
    }
}