//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        
        vector<bool> vis(v,false);
        queue<int> q;
        vis[0]=true;
        q.push(0);
        vector<int> res;
        while(!q.empty()){
             int node=q.front();
             res.push_back(node);
             q.pop();
             for(int i=0;i<adj[node].size();i++){
            
                    if(vis[adj[node][i]]==false){
                        vis[adj[node][i]]=true;
                        q.push(adj[node][i]);
                    }
             }
        } 
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
