//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int start=0;
        int end=arr.size()-1;
        int diff=INT_MAX;
        vector<int>ans(2,-1);
        while(start<end){
            int sum = arr[start]+arr[end];
            if(abs(x-sum)<diff){
                diff=abs(x-sum);
                ans[0]=arr[start];
                ans[1]=arr[end];
            }
            else if(sum<x){
                start++;
            }
            else{
                end--;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends