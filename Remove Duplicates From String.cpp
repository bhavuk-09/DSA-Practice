#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    // your code goes here
    map<char,int> mp;
    string res;
    for(int i=0;i<s.length();i++){
        mp[s[i]] ++;
    }
    for(char i='a';i<='z';i++){
        if(mp[i] !=0 )  res+=i;
    }
    return res;
}
