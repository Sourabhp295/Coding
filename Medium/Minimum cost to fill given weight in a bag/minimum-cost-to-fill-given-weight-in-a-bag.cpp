//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int solve(int i , int w , vector<int> cost){
        if(i==0){
            if(cost[i]!=-1) return w*cost[0];
            return 1e9;
        }
        
    
        
        int nt = solve(i-1,w,cost);
        int wt = i+1;
        int t = 1e9;
        if(cost[i]!=-1 && w>=wt)  t = cost[i] + solve(i,w-wt,cost);
        
        return min(t,nt);
    }
    
    int minimumCost(int n, int W, vector<int> &cost) {
        // code here
        vector<vector<int>> dp(n+1,vector<int>(W+1,0));
        
        for(int w = 0;w<=W;w++){
            if(cost[0]!=-1) dp[0][w] = w*cost[0];
            else dp[0][w] = 1e9;
        }
        

        for(int i = 1;i<n;i++){
            for(int w = 0;w<=W;w++){
                int nt = dp[i-1][w];
                int wt = i+1;
                int t = 1e9;
                if(cost[i]!=-1 && w>=wt)  t = cost[i] + dp[i][w-wt];
                dp[i][w] = min(t,nt);
            }
        }
        return dp[n-1][W];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int w;
        scanf("%d", &w);

        vector<int> cost(n);
        Array::input(cost, n);

        Solution obj;
        int res = obj.minimumCost(n, w, cost);

        cout << res << endl;
    }
}

// } Driver Code Ends