// User function Template for C++

class Solution {
  public:
    Node *nextR=NULL;
    void flatten(Node *root) {
        // code here
        if(root == NULL){
            return;
        }
        flatten(root->right);
        flatten(root->left);
        root->left = NULL;
        root->right = nextR;
        nextR = root;
    }
};