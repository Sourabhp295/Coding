//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
private:
    void dfs(int initial, int node, vector<int>& vis, vector<vector<int>>& ans, vector<int> adj[]){
        ans[initial][node] = 1;
        vis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it])
                dfs(initial, it, vis, ans, adj);
        }
    }
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        vector<int> adj[N];
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(graph[i][j] == 1) adj[i].push_back(j);
            }
        }
        vector<vector<int>> ans(N, vector<int>(N, 0));
        for(int i=0; i<N; i++){
            vector<int> vis(N, 0);
            dfs(i, i,vis,ans,adj);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends