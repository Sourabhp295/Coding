class Solution {
public:
    int findMaxK(vector<int>& v1) {
        unordered_set<int> s1;
        for(int i =0;i<v1.size();i++){
            if(v1[i]<0){
            s1.insert(v1[i]);
            }
        }
        int m = INT_MIN;
        for(int i =0;i<v1.size();i++){
            if(v1[i] > 0){
                if(s1.find(-1*v1[i]) != s1.end()){
                m = max(m,v1[i]);
            }
            }
        }
        return (m>0) ? m : -1;
    }
};