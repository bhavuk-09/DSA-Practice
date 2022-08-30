#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int n=s.length()-1;
    string str="";
    vector<string> res;
    for(int i=0;i<=n;i++){
        if(s[i]== ' '){
            int l=0,r=str.length()-1;
            while(l<r){
                swap(str[l],str[r]);
                l++;r--;
            }
            res.push_back(str);
            str="";
        }
        else str+=s[i];
    }
    int l=0,r=str.length()-1;
            while(l<r){
                swap(str[l],str[r]);
                l++;r--;
            }
    res.push_back(str);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    //cout<<s;
}
