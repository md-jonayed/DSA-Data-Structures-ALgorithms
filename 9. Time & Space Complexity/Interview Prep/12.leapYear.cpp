#include <bits/stdc++.h>
using namespace std;
bool isItLeapYear(int year)
{
    if (year % 4 == 0 && ((year % 100 != 0) || (year % 400 == 0)))
    {
        return true;
    }
    return false;
}
int main()
{
    int year;
    cin >> year;

    bool result = isItLeapYear(year);

    if (result == true)
    {
        cout << year << " is a leap year" << endl;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }
}