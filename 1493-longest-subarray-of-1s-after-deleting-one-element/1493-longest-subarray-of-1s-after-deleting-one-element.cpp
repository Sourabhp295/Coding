class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int>prefix(nums.size());
        vector<int>suffix(nums.size());
        int ct = 0;
        for(int i = 0;i < nums.size();i++){
            prefix[i] = ct;
            if(nums[i] == 1){
                ct++;
            }
            else{
                ct = 0;
            }
        }
        ct = 0;
        for(int i = nums.size()-1;i >= 0;i--){
            suffix[i] = ct;
            if(nums[i] == 1){
                ct++;
            }
            else{
                ct = 0;
            }
        }
        int ans = 0;
        for(int i = 0;i < nums.size();i++){
            ans = max(ans,prefix[i] + suffix[i]);
        }
        return ans;
    }
};