#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    initally vector size 0
    when we insert an element it takes 1 place as like array
    when we insert another element it goes to the same location to store the value but there is no space left so it internally doubles the size and store the value. 
    if there is space it store the value if there is no space it doubles the size and store the value and discard the previous size vector and treat the newly created vector as the main vector.
    */

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
/*
0----> insert a ->0
insert b ----->0 x
0-1 size increased to 2 -----> a,b
insert c ------0-1 x
0-2 size increased to 4 ------>a,b,c
a,b,c vector size 3 but its capacity 4
*/
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
}