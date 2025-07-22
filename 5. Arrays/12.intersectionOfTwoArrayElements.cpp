#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size1, size2;
    cin >> size1;
    cin >> size2;

    int *a = new int[size1];
    int *b = new int[size2];

    for (int i = 0; i < size1; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a[i] == b[j])
            {
                bool isALreadyPrinted = false;
                for (int k = 0; k < i; k++)
                {
                    if (a[k] == a[i])
                    {
                        isALreadyPrinted = true;
                        break;
                    }
                }
                if (isALreadyPrinted != true)
                {
                    cout << a[i] << ",";
                }
                break;
            }
        }
    }
}

/*
1 2 2 3 5
1 2 2 4 3
*/