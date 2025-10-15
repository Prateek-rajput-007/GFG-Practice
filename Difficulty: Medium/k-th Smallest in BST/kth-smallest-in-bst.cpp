/*Complete the function below

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Return the Kth smallest element in the given BST
    void find(int &ans, Node * root,int &k){
        if(!root) return;
        find(ans,root->left,k);
        k-=1;
        if(k==0) ans = root->data;
        find(ans,root->right,k);
    }
  public:
    int kthSmallest(Node *root, int K) {
        int ans = -1;
        find(ans,root,K);
        return ans;
    }
};

