/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
public:
    // Helper function that returns the sum of the subtree
    // and checks if it's a sum tree
    int checkSumTree(Node* root, bool &isValid) {
        if (root == NULL) {
            return 0;
        }
        
        // If it's a leaf node, return its value
        if (root->left == NULL && root->right == NULL) {
            return root->data;
        }
        
        // Get sum of left and right subtrees
        int leftSum = checkSumTree(root->left, isValid);
        int rightSum = checkSumTree(root->right, isValid);
        
        // Check if current node satisfies sum tree property
        if (root->data != leftSum + rightSum) {
            isValid = false;
        }
        
        // Return total sum of this subtree
        return root->data + leftSum + rightSum;
    }

    bool isSumTree(Node* root) {
        bool isValid = true;
        checkSumTree(root, isValid);
        return isValid;
    }
};