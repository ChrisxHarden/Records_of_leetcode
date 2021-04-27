//这是递归的做法

int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        if(root==nullptr) return sum;
        if(root->val>low&&root->val<high)
        {
            
            sum+=rangeSumBST(root->left,low,high);
            sum+=root->val;
            sum+=rangeSumBST(root->right,low,high);
        }
        else if(root->val<=low)
        {
            if(root->val==low) sum+=root->val;
            sum+=rangeSumBST(root->right,low,high);
        }
        else
        {
            if(root->val==high) sum+=root->val;
            sum+=rangeSumBST(root->left,low,high);
        }
        return sum;

    }
