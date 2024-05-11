//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minSteps(int d) {
        int sum =0;
        for(int i =1;i<=d;i++){
            sum+=i;
            if(sum == d){
                return i;
            }
            else if((sum - d)>=2 and (sum - d)%2 == 0){
                return i;
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends