// #include <bits/stdc++.h>
// using namespace std;

// bool isPrime(int number)
// {
//     bool flag = false;
//     for (int i = 2; i <= number - 1;i++){
//         if(number%i==0){
//             flag = true;
//             break;
//         }
//         else{
//             flag = false;
//         }
//     }
//     return flag;
// }
// int main()
// {
//     int number;
//     cin >> number;
//     cout <<boolalpha<< isPrime(number) << endl;
// }

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number)
{
    if (number <= 1)
        return false; // 0 and 1 are not prime numbers

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int number;
    cin >> number;
    cout << "is this " << number << " number prime?" << endl;
    cout << boolalpha << isPrime(number) << endl;
}
