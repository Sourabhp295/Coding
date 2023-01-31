class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v1(nums.size());
        for(int i=0;i<nums.size();i++){
            v1[(i+k)%nums.size()]=nums[i];
        }
        nums=v1;
        
    }
};