class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& v1) {
        int n = v1.size();
        vector<int>v2(n);
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(v1[j]<v1[i] && i!=j){
                    count++;
                }
            }
            v2[i]= count;
            count = 0;
        }
        return v2;
        
    }
};