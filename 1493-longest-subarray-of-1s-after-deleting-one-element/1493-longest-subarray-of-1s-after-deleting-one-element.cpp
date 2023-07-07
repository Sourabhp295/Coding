class Solution {
public:
    int longestSubarray(vector<int>& v1) {
       int n=v1.size();
        int tail=0,count=0,maximum=0;
        for(int i=0;i<n;i++){
            if(v1[i]==0){
                count++;
            }
            while(count>1){
                if(v1[tail]==0){
                count--;
                }
                        tail++;
            }
            maximum=max(maximum,i-tail);
            
        }
        return maximum;
    }
};