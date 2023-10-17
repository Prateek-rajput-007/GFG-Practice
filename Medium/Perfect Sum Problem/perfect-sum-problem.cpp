//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod=1e9+7;
	int solve(int i,int arr[], int n, int sum,vector<vector<int>> &dp){
	    if(i==n){
	        if(sum==0){
	            return 1;
	        }
	        return 0;
	    }
	    if(dp[i][sum]!=-1)
	    {
            return dp[i][sum];
	     }
	    int include = 0;
	    if(arr[i]<=sum){
	        include = solve(i+1,arr,n,sum-arr[i],dp);
	    }
	    int exclude = solve(i+1,arr,n,sum,dp);
	    return dp[i][sum]=(include+exclude)%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1) );
        return solve(0,arr,n,sum,dp);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends