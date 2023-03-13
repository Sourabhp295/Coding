class Solution {
public:
    int findPeakElement(vector<int>& v1) {
        int n= v1.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if((mid==0 || v1[mid]>=v1[mid-1]) && (mid==n-1 || v1[mid]>=v1[mid+1])){
                return mid;
            }
            if( mid>0 && v1[mid-1]>=v1[mid]){
                high=mid-1;
                
            }
            else{
                low=mid+1;
                
            }
        }
        return -1;
        
    }
};