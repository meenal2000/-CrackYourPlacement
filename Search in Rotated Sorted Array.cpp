class Solution {
public: 
    //  0 1 2 3 4 5 6
    // [4,5,6,7,0,1,2]
    // 
    // s = 0; e = 6; mid = 3
    // s = 4 ; e = 6; mid = 5
    
    int helper(vector<int> &nums, int target , int s, int e)
    {
        int mid = (s + e)/2;
        if(s > e)
            return -1;
        if(nums[mid] == target)
            return mid;
        if(nums[s] <= nums[mid])
        {
            if( target>=nums[s] && target<nums[mid] )
            {
                return helper(nums,target,s,mid-1);
            }
            else
                return helper(nums,target,mid+1,e);
        }
        // lies in second half
       else
        {
            if(target >nums[mid] && target <= nums[e])
                return helper(nums,target,mid+1,e);
           return helper(nums,target,s,mid-1);
        }
        
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = helper(nums,target,0,n-1);
        return ans;
    }
};
