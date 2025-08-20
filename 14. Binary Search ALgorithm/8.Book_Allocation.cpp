/*
there is an array of the number of pages of books
suppose 4 books each have [2,1,3,4] pages
suppose there are 2 students

if student number > books number then invalid return -1
sum of pages --> 10
so we can allocate pages 0 to 10
0,1,2,3,4,5,6,7,8,9,10
L                    R
if mid == valid go to left --> end = mid -1
if mid == invalid go to right --> start = mid+1

s1          s2
2           2+3+4=8
2+1         3+4=7
2+1+3=6       4

so max pages minimum values [8,7,6] == 6 ans
*/

#include <bits/stdc++.h>
using namespace std;

bool validMid(vector<int> &pages, int numberOfBooks, int noOfStudents, int maxPages)
{
    int page = 0;
    int student = 1;
    for (int i = 0; i < pages.size(); i++)
    {
        if (pages[i] > maxPages)
        {
            return false;
        }
        if (page + pages[i] <= maxPages)
        {
            page = page + pages[i];
        }
        else
        {
            student++;
            page = pages[i];
        }
    }
    if (student > noOfStudents)
    {
        return false;
    }
    else
    {
        return true;
    }
    return false;
}

int main()
{
    vector<int> pages = {2, 1, 3, 4};
    int numberOfBooks = pages.size();
    int noOfStudents = 2;
    int totalPages = 0;
    for (int num : pages)
    {
        totalPages = totalPages + num;
    }

    int start = 0;
    int end = totalPages;
    int ans = -1;
    int mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (validMid(pages, numberOfBooks, noOfStudents, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (mid == -1)
    {
        cout << "max page minimum value not found" << endl;
    }
    else
    {
        cout << "max page minimum value is: " << mid << endl;
    }
}