class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int ans =0;
        int least =prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]-least>ans)ans =prices[i]-least;
            least =min(least,prices[i]);
        }
        return ans;
    }
};