vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; ++i)
        {
            int val = abs(nums[i]);
            if(nums[val-1] > 0)
            {
                nums[val-1] = -nums[val-1];
            }else
                ans.push_back(val);
        }   
        return ans;
    }
