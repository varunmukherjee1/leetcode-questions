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

    bool cmp(TreeNode* n1 , TreeNode* n2){

        if(n1 == NULL && n2 == NULL)    return true;
        if(n1 == NULL || n2 == NULL)    return false;

        return ((n1->val == n2->val) && cmp(n1->right,n2->left) && cmp(n1->left,n2->right));
    }
    
    bool isSymmetric(TreeNode* root) {
        
        return cmp(root,root);
    }
};