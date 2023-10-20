//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long f(int faces,int dice,int target,vector<vector<long long int>> &dp)
    {
        if(target<0){
            return 0;
        }
        if(target==0 && dice==0){
            return 1;
        }
        if(target==0 && dice!=0){
            return 0;
        }
        if(dice==0 && target!=0)
        {
            return 0;
        }
        if(dp[dice][target]!=-1){
            return dp[dice][target];
        }
        long long int ct=0;
        for(int i=1;i<=faces;i++)
        {
            ct+=f(faces,dice-1,target-i,dp);
        }
        return dp[dice][target]=ct;
    }
    long long noOfWays(int m , int n , int x) {
        vector<vector<long long int>> dp(n+1,vector<long long int> (x+1,-1)); 
        return f(m,n,x,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends