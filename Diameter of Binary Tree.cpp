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
    int solve(TreeNode* root, int &len){
        if(!root)
            return 0;
        int lsub = solve(root->left, len);
        int rsub = solve(root->right, len);

        len = max(len, lsub+rsub);

        return max(lsub, rsub)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int len = 0;
        solve(root, len);
        return (len);
    }
};
