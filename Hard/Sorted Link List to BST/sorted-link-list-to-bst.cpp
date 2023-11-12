//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; 

void preOrder(TNode* node)  
{  
    if (node == NULL)  
        return;  
    cout<<node->data<<" ";  
    preOrder(node->left);  
    preOrder(node->right);  
} 


// } Driver Code Ends
//User function Template for C++


//User function Template for C++

/* 
//Linked List
struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; */
class Solution{
  public:
    void convert(LNode * head,vector<int> &ans){
        while(head != NULL){
            ans.push_back(head->data);
            head = head->next;
        }
    }
    
    TNode * arraytobst(vector<int> &ans, int start, int end){
        int mid;
        if((start + end) %2 == 0){
            mid = (start + end)/2;
        }else{
            mid = (start + end + 1)/2;
        }
       
        
        if(start > end){
            return NULL;
        }
        
        TNode * root = new TNode(ans[mid]);
        root->left = arraytobst(ans,start,mid-1);
        root->right = arraytobst(ans,mid + 1,end);
        
        return root;
    }
  
    TNode* sortedListToBST(LNode *head) {
        // convert linked list to array 
        vector<int> ans;
        convert(head,ans);
        
        // sorted list to tree 
        int start = 0;
        int end = ans.size() -1;
        TNode * root = arraytobst(ans,start,end);
        return root;
    }

 
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        LNode *head = new LNode(data);
        LNode *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new LNode(data);
            tail = tail->next;
        }
        Solution ob;
        TNode* Thead = ob.sortedListToBST(head);
        preOrder(Thead);
        cout<<"\n";
        
    }
    return 0;
}

// } Driver Code Ends