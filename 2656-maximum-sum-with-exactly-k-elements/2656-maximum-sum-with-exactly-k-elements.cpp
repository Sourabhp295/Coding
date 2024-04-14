class Solution {
public:
    int maximizeSum(vector<int>& v1, int k) {
        int m = INT_MIN;
        for(int i=0;i<v1.size();i++){
            m = max(m, v1[i]);
        }
        int x=m;
        while(k>1){
           m += ++x;
            cout<<m;
            k--;
        }
        return m;
    }
};