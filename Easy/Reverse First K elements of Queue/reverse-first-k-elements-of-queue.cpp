//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



// User function Template for C++

// Function to reverse first k elements of a queu
class Solution {
    public:
queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int>st;
    while(k--){
        st.push(q.front());
        q.pop();
    }
    q.push(-1);
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(q.front()!=-1){
        q.push(q.front());
        q.pop();
    }
    q.pop();
    return q;
}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends