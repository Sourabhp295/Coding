class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
   

        int n=nums.size();
        vector<int> v1;
        int count=0;
        if(nums.size()==1){
if(nums[0]==target){
                v1.push_back(0);
                v1.push_back(0);}
else{
  v1.push_back(-1);
            v1.push_back(-1);
}
return v1;
     }
        for(int i=0;i<n;i++){
            if(nums[i] == target){
                count++;
                v1.push_back(i); 
            }
    
            }

        if(count==0){
            v1.push_back(-1);
            v1.push_back(-1);
        }
        vector<int> ans;
        ans.push_back(v1[0]);
        ans.push_back(v1[v1.size()-1]);
          return ans;
        
    }
};