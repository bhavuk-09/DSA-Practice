//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    map<char,int> mp;
	    string res;
	    for(int i=0;i<S.length();i++){
	        if(mp[S[i]] >= 0){
	            mp[S[i]]++;
	        }
	        else mp[S[i]]=0;
	    }
	    
	    for(int  i=0;i<= S.length();i++){
	        if(mp[S[i]]>=1){
	            res=res+S[i];
	            mp[S[i]]=0;
	        }
	    }
	    return res;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends
