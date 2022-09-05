// Mad Numbers.cpp
// You have been given a positive integer num. A mad number is number of positive integers less than or equal to num whose digits sums are even
// Eg 30 will return 14 (2,4,6,8,11,13,15,17,19,20,22,24,26,28)
#include <iostream>
int countEven(int num) {
        int count = 0;
        for (int i = 1; i <= num; i++) {
        int a=i;
        int sum = 0;
        while (a >0 ) {
        sum += a%10;
        a /= 10;
        }
        if (sum % 2 == 0) count++;
    }
    return count;
}
using namespace std;
int main() {
    int n;
    cin>>n;
    cout<<countEven(n);
}
