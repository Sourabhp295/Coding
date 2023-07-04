class Solution {
public:
    int singleNumber(vector<int>& v1) {
         int n=v1.size();
        if(n==1){
            return v1[0];
        }
        
    sort(v1.begin(),v1.end());
       
    
        for(int i=n-1;i>=0;i=i-3){
            if(i==0 && v1[i]!= v1[i+1]){
                return v1[i];
            }
            if(v1[i]!=v1[i-1] && v1[i]!=v1[i-2]){
                return v1[i];
            }
            
        }
        return 0;
    }
};