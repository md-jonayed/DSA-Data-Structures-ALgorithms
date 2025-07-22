#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int *arr = new int[size];
    int *ar = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < size;i++){
    //     for (int j = i + 1; j < size;j++){
    //         if(arr[i]==arr[j]){
    //             arr[j] = 0;
    //         }
    //     }
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     if(arr[i]==0){
    //         continue;
    //     }
    //     cout << arr[i]<<",";
    // }

    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate == false)
        {
            cout << arr[i] << ",";
        }
    }
}

// 1 1 2 2 3
// 1 == 1? 1=0
// 0 ==2?
// 2==2? 2=0
// 0==3?
// 3==?
