//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        // vector<vector<int>> final_result;
        // int i=0;
        // while(i!=n-1){
        //     int cur=i;
        //     //vector<int> res;
        //     while(A[i]<=A[i+1] and i<n-1){
        //         i++;
        //     }
            
        //     if(cur != i) final_result.push_back({cur,i});
        //     if (i<n-1) i++;
            
        // }
        vector<vector<int>> res;
        int i=0;
        int profit=0;
        while(i<n-1){
            int cur=i;
            while(A[i]<A[i+1] and i<n-1){
                i++;
            }
            if(cur!=i) res.push_back({cur,i});
            profit+=A[i]-A[cur];
            i++;
        }
        //cout<<profit<<endl;
        return res;
        
        // return final_result;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends