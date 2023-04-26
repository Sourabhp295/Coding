class Solution {
public:
    int addDigits(int num) {
        int x=0;
        int y=0;
        while(num>0){
            x=num%10;
            y=y+x;
            num= num/10;
        }
        
        if(y<10){
            return y;
        }
        else{
            return addDigits(y);
        }
        
    }
};