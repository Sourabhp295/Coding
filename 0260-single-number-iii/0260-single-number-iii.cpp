class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int>v1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto it:mp){
            if(it.second == 1){
                v1.push_back(it.first);
            }
        }
        return v1;
    }
};