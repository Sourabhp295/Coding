//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int>adj[K];
        vector<int>in(K,0);
        string ans;
        for(int i=0;i<N-1;i++){
           string a=dict[i],b=dict[i+1];
           int n=a.length(),m=b.length();
           int p=0;
           while(p<n&&p<m) {
               if(a[p]==b[p]) p++;
               else break;
           }
          if(p>=n||p>=m) continue;
           adj[a[p]-'a'].push_back(b[p]-'a');
           in[b[p]-'a']++;
        }
        queue<int>q;
        for(int i=0;i<K;i++) if(!in[i]) q.push(i);
        while(!q.empty()){
            int i=q.front();
            q.pop();
            ans.push_back('a'+i);
            for(int &x:adj[i]){
                in[x]--;
                if(!in[x]) q.push(x);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends