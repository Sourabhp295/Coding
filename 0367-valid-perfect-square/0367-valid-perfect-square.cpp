class Solution {
public:
    bool isPerfectSquare(int x) {
         if(x==0) return true;
        long long low=1,high=x,mid;
        while(low<=high){
             mid=low+(high-low)/2;
            if(mid*mid==x){
               return true;
           }
           else if(mid*mid>x){
               high=mid-1;
            }
           else {
               low=mid+1;
           }
            
        }
        return false;
        
    }
};