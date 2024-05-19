//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int low = std::lower_bound(arr, arr+n, k) -arr;
        if(arr[low] == k)
            return k;
        else if(low == 0)
            return arr[0];
        
        int minDiff = k - arr[low-1];
        int maxDiff = arr[low] - k;
        
        if(minDiff >= maxDiff)
            return arr[low];
        else 
            return arr[low-1];
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends