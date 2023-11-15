//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  long long int mod=1000000007;
  int solve(int n,vector<int>&dp){
      if(n==0 || n==1){
          return n;
      }
      if(dp[n]!=-1){
          return dp[n]%mod;
      }
      dp[n]=solve(n-1,dp)+solve(n-2,dp);
      return dp[n]%mod;
  }
    int nthFibonacci(int n){
        // code here
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends