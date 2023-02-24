class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int res=v[0];
        int ans=v[0];
        int n= v.size();
        for(int i=1;i<n;i++){
            res=max((res+v[i]),v[i]);
                ans=max(ans,res);
        }
        return ans;
        
    }
};