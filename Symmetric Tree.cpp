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
    bool solve(TreeNode* l, TreeNode* r){
        if(!l || !r)
            return (!l && !r);
        bool check = (l->val == r->val);
        bool lsub = solve(l->left, r->right);
        bool rsub = solve(l->right, r->left);
        return (check && lsub && rsub);
    }
    bool isSymmetric(TreeNode* root) {
        return solve(root->left, root->right);
    }
};
