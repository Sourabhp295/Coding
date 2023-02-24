class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX;
        int p=0;
        int s=0;
        for(int i=0;i<prices.size();i++)
        {
            if(m>prices[i])
            {
                m=prices[i];
            }
            s=prices[i]-m;
            p=max(p,s);
        }
        return p;
    }
};