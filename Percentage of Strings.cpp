

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string o;
    getline(cin,s);
    getline(cin,o);
    int len= s.length();
    set<char> s1;
    for(int i=0;i<len;i++){
        s1.insert(s[i]);
    }
    int ctr=0;
    for(int i=0;i<o.length();i++){
        if(s1.find(o[i]) != s1.end()) 
        ctr++;
    }
    float res= (ctr*100)/(float)len;
    cout<<(float) res;
}
