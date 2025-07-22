#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int startIndex;
    cin >> startIndex;
    //1,2,3,4,5
    for (int start = startIndex; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            for (int k = start; k <= end; k++)
            {
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}

/*
maximum sub array sum:

1,2,3,4,5
->1|2|3|4|5
->1-2|2-3|3-4|4-5
->1-2-3|2-3-4|3-4-5
->1-2-3-4|2-3-4-5
->|1-2-3-4-5|

# sub array = (n * (n+1))/2
=(5*(5+1))/2 = 15.
*/