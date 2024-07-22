class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p || !q)
            return(!p && !q);
        bool check = (p->val == q->val);
        bool lsub = isSameTree(p->left, q->left);
        bool rsub = isSameTree(p->right, q->right);
        return (check && lsub && rsub);
    }
};
