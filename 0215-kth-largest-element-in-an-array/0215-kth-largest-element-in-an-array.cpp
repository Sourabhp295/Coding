class Solution {
public:
    int findKthLargest(vector<int>& v1, int k) {
        sort(v1.begin(),v1.end());
        int ans=v1[v1.size()-k];
        return ans;
        
    }
};