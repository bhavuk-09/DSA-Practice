//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        char o,t;
        string temp=str1;
        
        //Clockwise
        o=str1[str1.length()-2];
        t=str1[str1.length()-1];
        for(int i=str1.length()-2;i>=0;i--){
            str1[i+2]=str1[i];
        }
        str1[1]=t;
        str1[0]=o;
        //cout<<"temp   "<<str1<<endl;
        if(str1==str2){
            return 1;
        }
        //....................................
        //Anticlockwise
        o=temp[1];
        t=temp[0];
        for(int i=0;i<str1.length()-2;i++){
            temp[i]=temp[i+2];
        }
        temp[str1.length()-2]=t;
        temp[str1.length()-1]=o;
         //cout<<"temp1   "<<temp<<endl;
        if(temp==str2){
            return 1;
        }
        
        return 0;
        
        
        
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
