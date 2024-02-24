//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int solve(int n,vector<int>&dp){
            if(n==0){
                return 0;
            }
            if(n==1){
                return 1;
            }
            if(dp[n]!=-1){
                return dp[n];
            }
            int a1 = solve(n/2,dp);
            int b1 = solve(n/3,dp);
            int c1 = solve(n/4,dp);
            return dp[n]=max(n,a1+b1+c1);
        }
        int maxSum(int n)
        {
            //code here.
            vector<int>dp(n+1,-1);
            int ans = solve(n,dp);
            return ans;
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
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends