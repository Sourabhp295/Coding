class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int res=prices[0];
        for(int i=1;i<prices.size();i++){
            profit=max((prices[i]-res),profit);
            res= min(prices[i],res);
            
                
        }
        return profit;
    }
};