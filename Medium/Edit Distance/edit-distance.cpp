//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solveMem(string &a, string &b, int i,int j, vector<vector<int>> &dp){
        if(i==a.length()){
            return b.length()-j;
        }
        if(j==b.length()){
            return a.length()-i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=0;
        if(a[i]==b[j]){
            return solveMem(a,b,i+1,j+1,dp);
        }
        else{
            //insert
            int in=1+solveMem(a,b,i,j+1,dp);
            int de=1+solveMem(a,b,i+1,j,dp);
            int re=1+solveMem(a,b,i+1,j+1,dp);
            ans=min(in,min(de,re));
        }
        dp[i][j]=ans;
        return ans;
    }
    int editDistance(string s, string t) {
        // Code here
         int n1 = s.length();
        int n2 = t.length();

        vector<vector<int>> dp(n1+1, vector<int> (n2+1, -1));

        return solveMem(s, t, 0, 0, dp);
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends