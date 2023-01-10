class Solution {
public:
    vector<int> twoSum(vector<int>& array, int target) {
    int n=array.size();
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if ((array[i]+array[j]==target) && i!=j ){
                return {i,j};
            }
        }
    }
    return {0};
        
    }
};