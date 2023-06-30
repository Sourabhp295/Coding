class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int m=v1.size();
        int n= v2.size();
        int i=0,j=0;
        vector<int>v3;
        while(i<m && j<n){
            if(v1[i]==v2[j]){
                v3.push_back(v1[i]);
                i++;
                j++;
            }
            else if(v1[i]<v2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return v3;
        
    }
};