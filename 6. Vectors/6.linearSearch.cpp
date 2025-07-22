#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    int target = 100;
    int index;
    bool found = false;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            found = true;
            index = i;
            break;
        }
    }
    if (found == false)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target found at index: " << index << endl;
    }
}