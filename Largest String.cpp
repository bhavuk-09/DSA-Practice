// Program to read n strings and find the largest string

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m=0;
    int size=0;
    char s[1000];
    char temp[1000];
    for(int i=0;i<n;i++){
        cin>>s;
        size=strlen(s);
        if(size>m){
            strcpy(temp,s);
        }
        m=max(size,m);
    }
    cout<<temp;
}
