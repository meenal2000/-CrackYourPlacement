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
    void solve(TreeNode* root, bool &left, int &sum)
    {
        if(!root)
            return;
        if(!root->left && !root->right)
        {
            if(left)
                sum += root->val;
            return;
        }
        left = true;
        solve(root->left, left, sum);
        left = false;
        solve(root->right, left, sum);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        bool left = false;
        int sum = 0;
        solve(root, left, sum);
        return sum;
    }
};
