class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v1;
        int i=0;
        int count=1;
        while(i<arr.size()){
            if(count != arr[i]){
                v1.push_back(count);
                count++;
            }
            if(count==arr[i]){
                i++;
                count++;
            }
        }
       if(k>v1.size()){
           return k+count-v1.size()-1;
       }
        return v1[k-1];
        
    }
};