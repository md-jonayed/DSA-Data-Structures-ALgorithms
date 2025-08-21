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
    vector<int> pages = {15, 17, 20};
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
    while (start <= end)
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
        cout << "max page minimum value is: " << ans << endl;
    }
}

/*
bookPages =[15,17,20] book=3 student =2
sum of pages = 15+17+20 = 52
start = 0 end =52
dry run with start = 0, end = 52, bookPages = [15,17,20], students = 2.
We use binary search with while (start <= end) and validMid(...) as discussed.

Initial: start=0, end=52, ans=-1

Iteration 1

mid = (0+52)/2 = 26

Check 26:

Student=1: 15 (ok), next 17 → 15+17=32>26 ⇒ Student=1+1=2
student2--> page=17

Next 20 → Student2: 17+20=37>26 ⇒ need Student=2+1=3 ❌ (invalid)

Move right: start = mid+1=26+1= 27

Iteration 2

mid = (27+52)/2 = 39

Check 39:

Student1: page=15+17=32 (ok)

Next 20 → page would be 32+20 52>39 ⇒ Student=1+1=2: page=20 (ok) ✔ (valid with 2 students)

Update: ans = mid= 39, move left: end = mid-1=39-1=38

Iteration 3

mid = (27+38)/2 = 32

Check 32:

Student1: page=15+17=32 (fits exactly)

Next page=32+20=52>32 ⇒ Student=1+1=2: page=20 ✔ (valid)

Update: ans = 32, move left: end = mid-1=32-1= 31

Iteration 4

mid = (27+31)/2 = 29

Check 29:

Student=1: 15, next 17 → 15+17= 32>29 ⇒ Student=1+1=2: page=17

Next 20 → page=17+20=37>29 ⇒ need Student=2+1=3 ❌ (invalid)

Move right: start = mid+1=29+1= 30

Iteration 5

mid = (30+31)/2 = 30

Check 30:

Student=1: 15, next 17 → pages=15+17=32>30 ⇒ Student=1+1=2: page=17

Next 20 → page=17+20=37>30 needs Student=2+1=3 ❌ (invalid)

Move right: start = mid+1=30+1= 31

Iteration 6

mid = (31+31)/2 = 31

Check 31:

Student=1: 15, next 17 page=1%+17=32 → 32>31 ⇒ Student=1+1=2: page=17

Next 20 →page=17+20=37>31 needs Student=2+1=3 ❌ (invalid)

Move right: start =mid+1=31+1=32

Loop ends (start=32, end=31).

Result

ans = 32
*/