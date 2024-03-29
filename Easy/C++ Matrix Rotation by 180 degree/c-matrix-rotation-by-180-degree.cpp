//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void rotate(vector<vector<int> >& arr) {
        // Code here
        int n=arr.size(), m=arr[0].size();
        int start,end;
        for(int i=0;i<n;i++){
        start=0, end=m-1;
            while(start<end){
                swap(arr[start][i],arr[end][i]);
                start++;
                end--;
            }
    }
    
    for(int i=0;i<m;i++){
        start=0, end=n-1;
            while(start<end){
                swap(arr[i][start],arr[i][end]);
                start++;
                end--;
            }
    }
    return;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.rotate(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends