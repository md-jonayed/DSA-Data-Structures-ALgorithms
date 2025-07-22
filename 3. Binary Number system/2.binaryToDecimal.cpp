#include<bits/stdc++.h>
using namespace std;

int binaryTodecimal(int binaryNumber){
    int ans = 0;
    int power = 1;
    while(binaryNumber>0){
        int remainder = binaryNumber % 10;
        binaryNumber = binaryNumber / 10;
        ans = ans + remainder * power;
        power=power*2;
    }
    return ans;
}
int main(){
    int binaryNumber;
    cout << "enter a  binary number: ";
    cin >> binaryNumber;
    cout << "binary to decimal is: " << binaryTodecimal(binaryNumber) << endl;

    
}