//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int dp[1001][1001];
  
    int solve(int i , int j , string& s , string &A ){
        
        if(i == s.size() || j == s.size()) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        
        if(s[i] == A[j]){
            return 1  + solve(i + 1 , j+ 1 , s , A);
            
        }
        int res =0;
        int take = solve(i + 1 , j , s , A);
        int nontake = solve(i ,  j + 1 , s , A);
        
        res= max(take , nontake);
        return dp[i][j] =res;
        
    }
    int minimumNumberOfDeletions(string S) { 
        // code here
        memset(dp, -1 , sizeof(dp));
        
        string A = S;
        reverse(begin(A) , end(A));
        
        return S.length()- solve( 0 , 0 , S , A);
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends