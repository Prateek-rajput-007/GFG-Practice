class Solution {
  public:
    int solve(vector<int> &h, int n, vector<int>& dp){
        if(n <= 0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int one = solve(h,n-1,dp) + abs(h[n]-h[n-1]);
        int two = INT_MAX;
        if(n > 1){
            two = solve(h,n-2,dp) + abs(h[n]-h[n-2]);
        }
        return dp[n] = min(one,two);
    }
    int minCost(vector<int>& h) {
        // Code here
        int n = h.size();
        vector<int> dp(n+1,-1);
        return solve(h,n-1,dp);
    }
};