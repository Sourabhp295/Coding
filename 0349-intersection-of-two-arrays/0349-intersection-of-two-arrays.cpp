class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int m=v1.size();
        int n=v2.size();
        int i=0;
        int j=0;
        vector<int> v3;
        
        while(i<m && j<n ){
            if(i>0 && v1[i]==v1[i-1]){
                i++;
                continue;
            }
            
            if(v1[i]<v2[j]){
                i++;
            }
            else if(v1[i]>v2[j]){
                j++;
            }
            else{
                v3.push_back(v1[i]);
                i++;
                j++;
            }
            
        }
        return v3;
    }
};