#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &vec, int start, int mid, int end)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (vec[i] <= vec[j])
        {
            temp.push_back(vec[i]);
            i++;
        }
        else
        {
            temp.push_back(vec[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(vec[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(vec[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        vec[i + start] = temp[i];
    }
}
void mergeSort(vector<int> &vec, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(vec, start, mid);
        mergeSort(vec, mid + 1, end);

        merge(vec, start, mid, end);
    }
}

int main()
{
    vector<int> vec = {12, 31, 35, 8, 32, 17};

    mergeSort(vec, 0, vec.size() - 1);

    for (int i : vec)
    {
        cout << i << ",";
    }
}