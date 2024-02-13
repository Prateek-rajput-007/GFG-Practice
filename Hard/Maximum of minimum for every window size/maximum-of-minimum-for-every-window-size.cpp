//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum of minimums of every window size.
    vector <int> maxOfMin(int arr[], int n)
    {
        // Your code here
          if(n == 0)
            return {};
        stack<int> st;
        vector<int> left(n+1, -1), right(n+1, n), res(n+1, 0);

        for(int i=0; i<n; ++i) {
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            if(!st.empty())
                left[i] = st.top();
            st.push(i);
        }
        
        while(!st.empty())
            st.pop();
            
        for(int i=n-1; i>=0; --i) {
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            if(!st.empty())
                right[i] = st.top();
            st.push(i);
        }
        
        for(int i=0; i<n; ++i) {
            int interval = right[i] - left[i] - 1;
            res[interval] = max(res[interval], arr[i]);
        }
        
        for(int i=n-1; i>=1; --i)
            res[i] = max(res[i], res[i+1]);
            
        res.erase(res.begin());
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector <int> res = ob.maxOfMin(a, n);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends