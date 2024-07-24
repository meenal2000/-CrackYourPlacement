class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    map< int , int > mp;
	    int n = nums.size();
	    for(int i=0; i<n; ++i)
	    {
	        mp[nums[i]] = i;
	    }
	    int ans = 0;
	    int i = 0;
	    for(auto it : mp)
	    {
	        int n2 = it.first;
	        int pos = it.second;
	        int n1 = nums[i];
	        if(n1 != n2)
	        {
	            nums[i] = n2;
	            nums[pos] = n1;
	            mp[n2] = i;
	            mp[n1] = pos;
	            ++ans;
	        }
	        
	        ++i;
	    }
	    return ans;
	}
};
