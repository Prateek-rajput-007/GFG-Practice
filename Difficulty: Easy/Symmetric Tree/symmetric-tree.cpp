/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
  bool check(Node* r1, Node* r2){
        if(r1==NULL && r2==NULL){
            return true;
        }
        if((r1==NULL && r2!=NULL) || (r1!=NULL && r2==NULL)){
            return 0;
        }
        return ((r1->data==r2->data) && check(r1->left,r2->right) && check(r1->right,r2->left));
    }
    bool isSymmetric(Node* root) {
        // Code here
          if(root==NULL){
	        return 1;
	    }
	    return check(root->left,root->right);
    }
};