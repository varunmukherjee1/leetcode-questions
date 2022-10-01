#include<bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    void inorder(TreeNode* root , vector<int>& vec){

        if(root == NULL)    return;

        inorder(root->left , vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }

    bool isValidBST(TreeNode* root) {
        
        vector<int> vec;

        inorder(root,vec);

        bool ans = true;
        int len = vec.size();

        for(int i = 1 ; i < len ; i++){
            if(vec[i] <= vec[i-1]){
                ans = false;
                break;
            }
        }

        return ans;
    }
};