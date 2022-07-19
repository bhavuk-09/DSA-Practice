#include<bits/stdc++.h>
using namespace std;

string vowel(string s){
    // your code goes here
    string res;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        res+=s[i];
    }
    return res;
} 
