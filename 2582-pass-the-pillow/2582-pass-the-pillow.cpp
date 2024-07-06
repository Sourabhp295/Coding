class Solution {
public:
    int passThePillow(int n, int time) {
        int count = 1;
        int a = time;
        int x = 1;
        int y = 0;
        while (a>0){
            
            if(x%2 != 0){
                count++;
            }
            else{
                count--;
            }
            if(count == n || count == n-(n-1)){
                x++;
            }
            
            a--;
        }
        return count;
       
    }
};