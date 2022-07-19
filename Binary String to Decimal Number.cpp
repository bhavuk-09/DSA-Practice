#include <iostream>
#include <string>
#include<cmath>
using namespace std;
 
int binaryToDecimal(string s)
{
    // your code goes here
    int len=s.length();
    int num = stoi(s);
    int res=0;
    int j=0;
    while(num!=0){
        int rem=num%10;
        res=res+ rem* pow(2,j++);
        num=num/10;
    }
    return res;
}
 
