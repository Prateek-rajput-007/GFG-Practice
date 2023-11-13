//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> nearestPerfectSquare(int N) {
        // code here
          int a = sqrt(N);
        if(a*a == N){
            return {N,0};
        }else{
            if( abs(a*a - N )> abs((a+1)*(a+1) - N )){
                return {(a+1)*(a+1),abs((a+1)*(a+1) - N )};
            }else{
                return {(a)*(a),abs(a*a - N)};
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends