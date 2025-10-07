/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
           vector<int> ans;
        if(root==NULL){
            return ans;
        }
        ///create a map for storing HD -> TopNode ->data
        map<int, int> topNode;

        //Level Order
        //we will store a pair consisting of Node and Horizontal Distance
        queue< pair<Node*, int> > q;
        q.push(make_pair(root, 0));

        while(!q.empty()) {
                pair<Node*, int> temp = q.front();
                q.pop();

                Node* frontNode = temp.first;
                int hd = temp.second;

                        //crete entry
                        topNode[hd] = frontNode->data;

                if(frontNode -> left)
                        q.push(make_pair(frontNode->left, hd-1));

                if(frontNode -> right)
                        q.push(make_pair(frontNode->right, hd+1));
        }
        for(auto it: topNode){
            ans.push_back(it.second);
        }
        return ans;
    }
};