//https://practice.geeksforgeeks.org/problems/minimum-indexed-character-1587115620/
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        // Your code here
        map<char,int> mp;
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        char r;
        bool t=false;
        // for(int i=0;i<patt.length();i++){
        //     if(mp[patt[i]]>0)
        //         t=true;
        // }
        // if(t==false) return -1; 
        for(int i=0;i<patt.length();i++){
            
            if(mp[patt[i]]>0){
                mp[patt[i]]=2001;
            }
        }
        for(int i=0;i<str.length();i++){
            if(mp[str[i]]==2001){
                return i;
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends
