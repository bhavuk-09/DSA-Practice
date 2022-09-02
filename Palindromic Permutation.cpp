// Nagarro Interview

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n= 1000000;     // 001000
    int c1=0,c2=0;
    map<int,int> mp;
    int temp=n;
    while(temp != 0){
        int rem= temp%10;
        mp[rem]++;
        temp=temp/10;
    }

for(int i=0;i<9;i++){
    if(mp[i] > 0){
        if(mp[i] % 2 ==0){
            c1++;
        }
        else c2++;
    }
}
    if(c1>0 and (c2==0 or c2==1)){
        cout<<"YEs";
    }
    // if()
    else cout<<"NO";

}
