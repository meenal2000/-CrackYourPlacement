int solve(vector<int> &prices, int ind, bool canBuy, vector< vector<int> > &dp)
    {
        if( ind == prices.size())
            return 0;
        if(dp[canBuy][ind] != -1)
            return dp[canBuy][ind];
        if(canBuy)
        {
            int op1 = solve(prices, ind+1, false, dp) - prices[ind];
            int op2 = solve(prices, ind+1, true, dp);
            return dp[canBuy][ind] = max(op1, op2);
        }else{
            int op1 = solve(prices, ind+1, true, dp) + prices[ind];
            int op2 = solve(prices, ind+1, false, dp);
            return dp[canBuy][ind] = max(op1, op2);
        }
    }
    int maxProfit(vector<int>& prices) {
        bool canBuy = true;
        int n = prices.size();
        vector< vector<int> > dp(2, vector<int> (n,-1));
        int ans = solve(prices, 0, canBuy, dp);
        return ans;
    }
