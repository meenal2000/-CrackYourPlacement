class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i < n-2; ++i)
        {
            int j = i+1;
            int k = n-1;
            int target = -nums[i];
            cout << i << "\n";
            while(j < k)
            {
                //cout << j << " " << k << " "<< i<<"\n";
                int sum = nums[j]+nums[k];
                if(sum == target)
                {
                    vector<int> vect = {nums[i], nums[j], nums[k]};
                    int x = nums[j], y = nums[k];
                    ans.push_back(vect);
                    while(j < k && x == nums[j])
                        ++j;
                    while(j < k && y == nums[k])
                        --k;
                }else if(sum > target)
                    --k;
                else 
                    ++j;
            }
            while(i+1< n && nums[i+1] == nums[i]) // kaafi deep logic thaaaa bhaaaai
                ++i;
            
        }
        return ans;

        }
    };
