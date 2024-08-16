//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
     int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        // 0 0 1 1 2 2 3
        //form a dp array
        vector<int> dp(n + 1, INT_MIN);
        //initialization 
        dp[0] = 0;
        for(int i = 1; i <= n; ++i){
            if(i - x >= 0){
                //if dp[i - x] is INT_MIN that means dp[i - x] is invalid cut.
                dp[i] = max(dp[i - x] == INT_MIN ? INT_MIN : dp[i - x] + 1, dp[i]);
            }
            if(i - y >= 0){
                dp[i] = max(dp[i - y] == INT_MIN ? INT_MIN : dp[i - y] + 1, dp[i]);
            }
            if(i - z >= 0){
                dp[i] = max(dp[i - z] == INT_MIN ? INT_MIN : dp[i - z] + 1, dp[i]);
            }
        }
        return dp[n] == INT_MIN ? 0 : dp[n];
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends