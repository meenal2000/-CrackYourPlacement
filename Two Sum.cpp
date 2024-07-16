class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; ++i)
        {
            auto itr = mp.find(target - nums[i]);
            if(itr != mp.end())
            {
                vector<int> ans = {i , itr->second};
                return ans;
            }   
            mp[nums[i]] = i;
        }
        return vector<int> ();
    }
};
