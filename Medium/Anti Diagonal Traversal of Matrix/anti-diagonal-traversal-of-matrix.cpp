//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> arr) 
    {
        // Code here
        vector<int> sol;
        int n=arr.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[i+j].push_back(arr[i][j]);
            }
        }
        for(auto i : mp){
            for(int j=0;j<i.second.size();j++)
            sol.push_back(i.second[j]);
        }
        return sol;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends