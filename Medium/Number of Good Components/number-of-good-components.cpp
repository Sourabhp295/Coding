//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    int dfs(int node , vector<int>adj[] , vector<int>&vis , set<int>&st,vector<int>indegree){
      vis[node]= 1 ;
      st.insert(indegree[node]) ;
      int count =0 ;
      for(auto it:adj[node]){
          if(!vis[it])count += 1+ dfs(it , adj,vis,st,indegree) ;
      }
      return count ;
    }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        // code here
        vector<int>adj[v] ;
        for(auto it:edges){
            adj[it[0]-1].push_back(it[1]-1) ;
            adj[it[1]-1].push_back(it[0]-1) ;
        }
        
        vector<int>indegree(v,0) ;
        for(int i=0;i<v;i++){
            indegree[i]= adj[i].size();
            // cout << indegree[i] << " " ;
        }
        vector<int>vis(v,0) ;
        int count =0 ;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                // cout << "node" << " " << i << endl ;
               set<int>st ;
               int visited_node= 1+ dfs(i,adj,vis,st,indegree) ;
            //   cout << visited_node << endl ;
            //   cout << st.size() << endl ;
               if(st.size()==1){
                   if(*st.begin()==visited_node-1)count ++ ;
               }
            }
        }
        return count ;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int e;
        scanf("%d", &e);

        int v;
        scanf("%d", &v);

        vector<vector<int>> edges(e, vector<int>(2));
        Matrix::input(edges, e, 2);

        Solution obj;
        int res = obj.findNumberOfGoodComponent(e, v, edges);

        cout << res << endl;
    }
}

// } Driver Code Ends