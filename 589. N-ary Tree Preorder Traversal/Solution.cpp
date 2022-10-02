#include<bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:

    void helper(Node* root , vector<int>& vec){
        if(root == NULL)    return;

        vec.push_back(root->val);

        for(Node* child : root->children){
            helper(child,vec);
        }
    }

    vector<int> preorder(Node* root) {
        
        vector<int> vec;

        helper(root,vec);

        return vec;
    }
};