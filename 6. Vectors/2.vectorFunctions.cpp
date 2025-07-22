#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> letters = {'a', 'b', 'c', 'd', 'e'};
    // size
    cout << letters.size() << endl;

    // push back - insert in back
    letters.push_back('f');
    cout << letters.size() << endl;

    // pop back - delete from last
    letters.pop_back();
    cout << letters.size() << endl;

    // front - print first value
    cout << letters.front() << endl;

    //back - prints last value
    cout << letters.back() << endl;

    //at - we can a use index value to do certain tasks
    cout << letters[1] << endl;
    cout << letters.at(1) << endl;
}

/*
Note: 
static and dynamic memory:
"static memory" allocates during compile time means when we are writing the code in that time our compiler checks if is there any syntax error in our code or not. 

"Dynamic Memory" allocates during runtime when we run the code 

array's memory allocation is static because we at the beginning declare the size
vector's memory allocation is dynamic beacuse we add elements inside vectors during runtime

static allocations take place inside statck memory
dynamic allocation take place inside heap memory

*/