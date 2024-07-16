 int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int minPrice = INT_MAX;
        for(int i = 0; i < n; ++i)
        {
            minPrice = min(minPrice, prices[i]);
            profit = max(profit, prices[i] - minPrice);
        }
        return profit;
    }
