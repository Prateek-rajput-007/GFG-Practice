//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& arr, int n) 
    { 
        // code here 
        int start,end;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            start=0,end=n-1;
            while(start<end){
                swap(arr[start][i],arr[end][i]);
                start++;end--;
            }
        }
        return;
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends