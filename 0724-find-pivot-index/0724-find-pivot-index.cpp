class Solution {
public:
    int pivotIndex(vector<int>& v1) {
        int n=v1.size();
        int sum =0;
        for(int i=0;i<n;i++){
            sum += v1[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans += v1[i];
            if(ans==sum){
                return i;
            }
            sum -= v1[i];
        }
        return -1;
        
    }
};