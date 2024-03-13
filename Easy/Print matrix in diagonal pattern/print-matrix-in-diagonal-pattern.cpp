//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
           vector<int> ans;
        int m=mat.size(),n=mat[0].size();
        int row=0,col=0;
        bool up=true;
        while(row<m && col<n){
            if(up){
                while(row>0 && col<n-1){
                    ans.push_back(mat[row][col]);
                    row--;col++;

                }
                ans.push_back(mat[row][col]);
                if(col==n-1){
                    row++;
                }else col++;
                up=false;
            }
            else{
                while(col>0 && row<m-1){
                    ans.push_back(mat[row][col]);
                    row++;col--;
                }
                ans.push_back(mat[row][col]);
                if(row==m-1) col++;
                else row++;
                up=true;
            }
        }
            return ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends