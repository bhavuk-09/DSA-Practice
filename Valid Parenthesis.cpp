//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends

bool isopen(char c){
    if (c=='(' || c=='{' || c=='['){
        return true;
    }
    return false;
}

bool isMatch(char a, char b){
    return { (a=='(' && b==')') || (a=='{' && b=='}')  || (a=='[' && b==']') };
}

bool valid(string s)
{
    // code here
    stack<char> sta;
    for(int i=0;i<s.length();i++){
        if(isopen(s[i])){
            sta.push(s[i]);
        }
        else{
           if(sta.empty()){
               return false;
           }
           else if(!isMatch(sta.top(),s[i])){
               return false;
           }
           else sta.pop();
           
        }
        
    }
    if (sta.empty())    return true;
    
}
