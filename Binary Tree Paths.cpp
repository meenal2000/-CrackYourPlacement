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
    void solve(TreeNode* root, string s, vector<string> &res){
        if(!root)
            return;
        s += to_string(root->val);
        if(root->left || root->right)
        {
            s += "->";
            solve(root->left, s, res);
            solve(root->right, s, res);
        }
        else
            res.push_back(s);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string s;
        solve(root, s, res);
        return res;
    }
};
