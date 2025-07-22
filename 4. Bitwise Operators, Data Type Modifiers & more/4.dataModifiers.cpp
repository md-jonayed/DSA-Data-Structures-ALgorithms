#include <bits/stdc++.h>
using namespace std;

int main()
{
    // interger 4 byte --> 4*8=32 bits.
    // it can store values from -2^31 to 2^31-1  range = (-2147483648 to 2147483647) (-2^31 to 2^31-1)
    cout << sizeof(int) << " bytes" << endl;
    /*
    long int 8 byte --> 8*8=64 bits.
    it can store values from -2^63 to 2^63-1  range = (-9223372036854775808 to 9223372036854775807) (-2^63 to 2^63-1)
    */
    cout << sizeof(long int) << " bytes" << endl;
    // long double 10 byte --> 10*8=80 bits.
    // it can store values from -2^127 to 2^127-1  range = (-170141183460469231731687303715884105728 to 170141183460469231731687303715884105727) (-2^127 to 2^127-1)
    cout << sizeof(long double) << " bytes" << endl;

    /*
    short int 2 byte --> 2*8=16 bits.
    it can store values from -2^15 to 2^15-1  range = (-32768 to 32767) (-2^15 to 2^15-1)
    */
    cout << sizeof(short int) << " bytes" << endl;

    /*
    long long int 8 byte --> 8*8=64 bits.
    it can store values from -2^63 to 2^63-1  range = (-9223372036854775808 to 9223372036854775807) (-2^63 to 2^63-1)
    */
    cout << sizeof(long long int) << " bytes" << endl;

    /*
    signed int 4 byte --> 4*8=32 bits.
    it can store values from -2^31 to 2^31-1  range = (-2147483648 to 2147483647) (-2^31 to 2^31-1)
    */
    cout << sizeof(signed int) << " bytes" << endl;

    /*
    unsigned int 4 byte --> 4*8=32 bits.
    it can store values from 0 to 2^32-1  range = (0 to 4294967295) (0 to 2^32-1)
    unsigned int can store only positive values. we will use unsigned int when we are sure that the value will be positive.
    */
    cout << sizeof(unsigned int) << " bytes" << endl;
}