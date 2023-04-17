class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& can, int extra) {
        int n=can.size();
        vector<bool>v1;
        int temp=INT_MIN;
        for(int i=0;i<n;i++){
            temp=max(temp,can[i]);  
        }
        for(int i=0;i<n;i++){
            if((can[i]+extra)>=temp){
                v1.push_back(true);
            }
            else{
                v1.push_back(false);
            }
        }
        return v1;
        
        
    }
};