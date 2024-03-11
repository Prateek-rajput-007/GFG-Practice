//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int mod=1e9+7;
    int countways(int index ,vector<int>&arr,int sum,vector<vector<int>>&dp)
    {
        if(index==0)
        {
            if(sum==0 and arr[0]==0) return 2;
            if(sum==0 or arr[0]==sum) return 1;
            return 0;
        }
        if(dp[index][sum]!=-1) return dp[index][sum]%mod;
        int nottake=countways(index-1,arr,sum,dp);
        int take=0;
        {
            if(arr[index]<=sum) take=countways(index-1,arr,sum-arr[index],dp);
        }
        return dp[index][sum]=((take)%mod+(nottake)%mod)%mod;
    }
    int countPartitions(int n, int d, vector<int>& arr) {
        int totalsum=0;
        for(int i=0;i<n;i++) totalsum+=arr[i];
        if(totalsum-d<0) return 0;
        if((totalsum-d)&1) return 0;
        int s2=(totalsum-d)/2;
        vector<vector<int>>dp(n,vector<int>(s2+1,-1));
        return countways(n-1,arr,s2,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends