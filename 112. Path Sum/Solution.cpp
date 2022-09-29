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

    bool helper(TreeNode* root , int target , int sum){

        if(root->left == NULL && root->right == NULL){
            return ((sum + root->val)== target);
        }

        if(root->left == NULL){
            return helper(root->right,target,sum + root->val);
        }
        else if(root->right == NULL){
            return helper(root->left,target,sum + root->val);
        }
        else{
            return (helper(root->left,target,sum + root->val) || helper(root->right,target,sum + root->val));
        }
    }

    bool hasPathSum(TreeNode* root, int targetSum) {

        if(root == NULL)    return false;

        return helper(root,targetSum , 0);     
    }
};