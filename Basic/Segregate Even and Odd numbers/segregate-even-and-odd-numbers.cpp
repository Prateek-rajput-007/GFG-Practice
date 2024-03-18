//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    int start=0;
	    int end=n-1;
	    while(start<=end){
	        if(arr[start]%2!=0 && arr[end]%2==0){
	            swap(arr[start++],arr[end--]);
	        }
	        else if(arr[start]%2==0){
	            start++;
	        }
	        else{
	            end--;
	        }
	    }
	    sort(arr,arr+start);
	    sort(arr+start,arr+n);
	    return;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends