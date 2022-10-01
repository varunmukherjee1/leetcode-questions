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

    bool findTarget(TreeNode* root, int k) {
        
        vector<int> vec;

        inorder(root,vec);

        int len = vec.size();

        int l = 0 , h = len -1;
        bool ans = false;

        while(l < h){
            int sum = vec[l] + vec[h];

            if(sum > k){
                h--;
            }
            else if(sum < k){
                l++;
            }
            else {
                ans = true;
                break;
            }
        }

        return ans;
    }
};