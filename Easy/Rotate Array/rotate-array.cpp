//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int a[], int d, int n){
        // code here
        // int temp;
        // for(int i=0;i<d;i++){
        //     temp=a[0];
        //     for(int j=0;j<n-1;j++){
        //         a[j]=a[j+1];
        //     }
        //     a[n-1]=temp;
        // }
        // return;
        d=d%n;
        reverse(a,a+d);
        reverse(a+d,a+n);
        reverse(a,a+n);
    }
};


//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends