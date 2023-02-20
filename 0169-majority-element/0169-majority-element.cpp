class Solution {
public:
    int majorityElement(vector<int>& v1) {
        int n=v1.size();
        int res=0;
        int count=1;
        for(int i=1;i<n;i++){
            if(v1[res]==v1[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                res=i;
                count=1;
            }
            
        }
        return v1[res];
    }
};