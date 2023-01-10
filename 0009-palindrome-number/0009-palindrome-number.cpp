class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long res=0;
        int temp=x;
        while(x != 0){
            int n=x%10;
            res=res*10+n;
            x=x/10;

        }
        if(temp==res){
            return true;

        }
        return false;


    }
};