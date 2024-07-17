class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int ans = 0;
        while(l < r)
        {
            int water = min(height[r], height[l])*(r-l);
            ans = max(ans, water);
            if(height[r] < height[l])
                --r;
            else
                ++l;
        }
        return ans;
    }
};
