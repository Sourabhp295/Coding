//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        if (arr.size() == 1) {
            return arr.back();
        }
        sort(arr.begin(), arr.end());
        string prefix = arr[0];
        for (int i = 1; i < arr.size(); ++i) {
            for (int j = 0; j < prefix.size(); ++j) {
                if (arr[i][j] != prefix[j]) {
                    prefix.resize(j);
                }
            }
        }
        if (prefix.empty()) {
            return "-1";
        }
        return prefix;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends