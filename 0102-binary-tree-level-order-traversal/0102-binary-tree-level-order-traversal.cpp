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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> que;

        que.push(root);
        int len = que.size();

        while(!que.empty()){
            vector<int> temp;

            for(int i = 0 ; i < len ; i++){
                TreeNode* tn = que.front();
                que.pop();
                
                if(tn->left)    que.push(tn->left);
                if(tn->right)   que.push(tn->right);

                temp.push_back(tn->val);
            }

            len = que.size();
            ans.push_back(temp);
        }

        return ans;
    }
};