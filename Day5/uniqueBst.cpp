class Solution {
public:
    int counter(int start,int end,vector<vector<int>>&dp)
    {
        if(start>=end)return 1;
        if(dp[start][end]!=-1)return dp[start][end];
        int ans =0;
        for(int i=start;i<=end;i++)
        {
            ans = ans + counter(start,i-1,dp)*counter(i+1,end,dp);
        }
        return dp[start][end]=ans;
    }
    int numTrees(int n) 
    {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return counter(1,n,dp);
    }
};