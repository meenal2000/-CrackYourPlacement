long long findMinDiff(vector<long long> nums, long long n, long long m){
        //code
        sort(nums.begin(), nums.end());
        long long x = m;
        if(n == 1)
            return 0LL;
        long long ans = INT_MAX;
        for(int i = 0; i < n; ++i)
        {
            if(i+m-1 < n)
            {
                ans = min(ans, nums[i+m-1] - nums[i]);
            }
            else
                break;
        }
        return ans;
    }  
