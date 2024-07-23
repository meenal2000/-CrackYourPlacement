bool solve(TreeNode* root, int currSum, int targetSum){
        if(!root)
            return false;
        currSum += root->val;
        if(!root->left && !root->right)
        {
            if(currSum == targetSum)
                return true;
            return false;
        }    
        bool op1 = solve(root->left, currSum, targetSum);
        bool op2 = solve(root->right, currSum, targetSum);
        return (op1 || op2);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int currSum = 0;
        return solve(root, currSum, targetSum);
    }
