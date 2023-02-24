class NumArray {
public:
    vector<int> v1;
    NumArray(vector<int>& nums) {
        
        int res=0;
        for(int i=0;i<nums.size();i++){
            res += nums[i];
                v1.push_back(res);
                
        }
       
        
    }
    
    int sumRange(int left, int right) {
        
        if(left==0){
            return v1[right];
        }
        else{
            return v1[right]-v1[left-1];
        }
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */