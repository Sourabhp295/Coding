class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n= nums.size();
        int res= -1;
        int minval=nums[0];
        for(int i=1;i<n;i++)
        {
            res=max(res,nums[i]-minval);
            minval=min(minval,nums[i]);
            
        }
        if(res==0)
        return -1;
        return res;
        }
};