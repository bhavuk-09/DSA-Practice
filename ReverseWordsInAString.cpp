// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here
        vector<string> s;
        string str= "";
        int i;
        for(i=0; i<S.length(); i++){
            
            if(S[i]!='.'){
                str+=S[i];
            }
            else {
                 s.push_back(str);
                 str="";
            }
        }
        s.push_back(str);
        string res="";
        for(i=s.size()-1;i>0;i--){
            res+= s[i];
            res+='.';
        }
        res+=s[i];
        return res;
        
        
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
