//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int x=n;
        int s=0;
        int ans=0;
        while(x != 0){
            s=x%10;
            ans +=(s*s*s);
            x=x/10;
            
        }
        if(n==ans){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends