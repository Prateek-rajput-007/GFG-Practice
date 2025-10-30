// User function Template for C++

class Solution {
  public:
  bool isValid(int i,int j,int n,int m, vector<vector<char>>& mat){
      if(i>=0 && i<n && j>=0 && j<m && mat[i][j]=='O'){
          return true;
      }
      return false;
  }
    void solve(int i,int j, int n,int m, vector<vector<char>>& mat){
        mat[i][j] = 'A';
        
        if(isValid(i-1,j,n,m,mat)){
            solve(i-1,j,n,m,mat);
        }
        if(isValid(i+1,j,n,m,mat)){
            solve(i+1,j,n,m,mat);
        }
        if(isValid(i,j-1,n,m,mat)){
            solve(i,j-1,n,m,mat);
        }
        if(isValid(i,j+1,n,m,mat)){
            solve(i,j+1,n,m,mat);
        }
    }
    vector<vector<char>> fill(vector<vector<char>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        
       for (int i = 0; i < n; i++) {
        if (mat[i][0] == 'O') solve(i, 0, n, m, mat);
        if (mat[i][m - 1] == 'O') solve(i, m - 1, n, m, mat);
    }
    for (int i = 0; i < m; i++) {
        if (mat[0][i] == 'O') solve(0, i, n, m, mat);
        if (mat[n - 1][i] == 'O') solve(n - 1, i, n, m, mat);
    }

    // Step 2: Convert remaining 'O' to 'X' and 'A' back to 'O'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 'O') {
                mat[i][j] = 'X';  // Flip surrounded 'O' to 'X'
            } else if (mat[i][j] == 'A') {
                mat[i][j] = 'O';  // Restore border-connected 'O'
            }
        }
    }
    return mat;
    }
};
