/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(vector<int>& nums, int st, int en)
    {
        if(st > en)
            return NULL;
        int mid = (st+en)/2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = solve(nums, st, mid-1);
        root->right = solve(nums, mid+1, en);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int sz = nums.size();
        return solve(nums, 0 , sz-1);
    }
};
