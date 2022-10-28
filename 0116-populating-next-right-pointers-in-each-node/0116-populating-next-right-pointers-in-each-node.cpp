class Solution {
public:
    Node* connect(Node* root) {

        if(root == NULL){
            return root;
        }

        queue<Node*> que;

        que.push(root);
        int len = que.size();

        while(!que.empty()){
            vector<Node*> temp;

            for(int i = 0 ; i < len ; i++){
                Node* tn = que.front();
                que.pop();
                
                if(tn->left)    que.push(tn->left);
                if(tn->right)   que.push(tn->right);

                temp.push_back(tn);
            }

            len = que.size();

            for(int k = 0 ; k < temp.size() -1 ; k++){
                temp[k]->next = temp[k+1];
            }
        }

        return root;

    }
};