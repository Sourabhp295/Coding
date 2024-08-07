class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty = numBottles;
        int ans = numBottles;
        while(empty>= numExchange){
            int rem = empty%numExchange;
            int a = empty/numExchange;
            ans = ans + a;
            empty = rem + a;
        }
        return ans;
    }
};