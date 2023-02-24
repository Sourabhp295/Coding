class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        sort(v.begin(),v.end());
        vector<int> v1;
        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1]){
                v1.push_back(v[i]);
            }
        }
        return v1;
        
    }
};