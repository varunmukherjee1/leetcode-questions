class Solution {
public:

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {

        if(!root1)
            return root2;
        
        if(!root2)
            return root1;
        
        TreeNode* temp = new TreeNode(root1->val + root2->val);

        if(root1->left || root2->left)
            temp->left = mergeTrees(root1->left, root2->left);
        

        if(root1->right || root2->right)
            temp->right = mergeTrees(root1->right, root2->right);

        return temp;
        
    }
};