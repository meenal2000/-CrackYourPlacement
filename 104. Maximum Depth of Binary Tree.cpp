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
    void solve(TreeNode* root, int ht, int &ans){
        if(!root)
        {
            ans = max(ans, ht);
            return;
        }
        solve(root->left, ht+1, ans);
        solve(root->right, ht+1, ans);

    }
    int maxDepth(TreeNode* root) {
        int ht = 0;
        solve(root, 0, ht);
        return ht;
    }
};
