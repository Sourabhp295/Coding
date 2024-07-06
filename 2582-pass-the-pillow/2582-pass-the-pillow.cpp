class Solution {
public:
    int passThePillow(int n, int time) {
        int count = 1;
        int x = 1;
        while (time>0){
            
            if(x%2 != 0){
                count++;
            }
            else{
                count--;
            }
            if(count == n || count == n-(n-1)){
                x++;
            }
            
            time--;
        }
        return count;
       
    }
};