//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int c=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='-'){
                c++;
            }
            if((str[i]>='0' and str[i]<='9') or str[i]=='-'){
                continue;
            }
            else return -1;
        }
        
        if(c>1){
            return -1;
        }
        
        long long int x=0;
        if(str[0]=='-'){
        for(int i=1;i<str.length();i++){
            x= x*10 + str[i] -'0';
        }
        return x* -1;
    }
    else{
        for(int i=0;i<str.length();i++){
            x= x*10 + str[i] -'0';
        }
        return x;
    }
    }
};
