// { Driver Code Starts
// Initial Template for C++

//Given an NxN matrix Mat. Sort all elements of the matrix.

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector <int> v1;
        vector <vector <int>> v2;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                v1.push_back(Mat[i][j]);
            }
        }
        sort(v1.begin(),v1.end());
        int t=0;
        for(int i=0;i<N;i++){
            vector <int> v3;
            for(int j=0;j<N;j++)
                 v3.push_back(v1[t++]);
            v2.push_back(v3);
        }
        return v2;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends
