#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec={7,8,9,1,2};

    for (int i = 0; i < vec.size() - 1;i++){
        int minimumIndex = i;
        for (int j = i + 1; j < vec.size(); j++)
        {
            if(vec[minimumIndex]>vec[j]){
                minimumIndex = j;
            }
        }
        if(minimumIndex!=i){
            // int temp;
            // temp = vec[i];
            // vec[i] = vec[minimumIndex];
            // vec[minimumIndex] = temp;
            swap(vec[i], vec[minimumIndex]);
        }
    }

    for (int val:vec){
        cout << val << ",";
    }
}

/*
Initial array: [5, 3, 1, 4]

i = 0:
  Find min in [5, 3, 1, 4] → 1 at index 2
  Swap arr[0] with arr[2] → [1, 3, 5, 4]

i = 1:
  Find min in [3, 5, 4] → 3 at index 1
  Already in place → [1, 3, 5, 4]

i = 2:
  Find min in [5, 4] → 4 at index 3
  Swap arr[2] with arr[3] → [1, 3, 4, 5]

i = 3:
  Only one element left → done

Final array: [1, 3, 4, 5]

*/