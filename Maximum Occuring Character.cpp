//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int> mp;
        int m=0;
        for (int i=0;i<str.length();i++){
            mp[str[i]]++;
            m=max(m,mp[str[i]]);
        }
        for(char i='a';i<'z';i++){
            if(mp[i]==m){
                return i;
            }
        }
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
