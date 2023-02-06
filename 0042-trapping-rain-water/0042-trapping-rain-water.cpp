class Solution {
public:
    int trap(vector<int>& v) {
        int res=0;
        int n=v.size();
        vector<int> lmax(n);
        vector<int> rmax(n);
        
        lmax[0]=v[0];
        for(int i=1;i<n;i++){
            lmax[i]=max(lmax[i-1],v[i]);
        }
        
        rmax[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(v[i],rmax[i+1]);
        }
        for(int i=1;i<n-1;i++){
            res += min(lmax[i],rmax[i])-v[i];
        }
        
        return res;
    }
};