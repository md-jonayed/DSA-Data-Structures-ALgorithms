#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 4; // 4=0100
    int b = 8; // 8=1000
    // bit wise and (&)
    cout << (a & b) << endl;
    // bitwise or (|)
    cout << (a | b) << endl;
    // bitwise xor (^) when differnt bit then 1 else 0
    cout << (a ^ b) << endl;
    // bitwsie left shift (<<) n<<i = n's binary will shift towards left i number of places and empty right places will be filled with 0
    cout << (a << 1) << endl;
    cout << (10 << 2) << endl;
    // bitwsie right shift (>>) n>>i = n's binary will shift towards right i number of places and empty left places will be filled with 0
    cout << (10 >> 1) << endl;
    cout << (8 >> 2) << endl;

    // for left shift a<<b == a*2^b e.g 8<<1=8*2^1=16
    // for right shift a>>b == a/2^b e.g 8>>1=8/2^1=4
}