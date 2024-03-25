//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
         long long l=0;
        long long r=n-1;
        
        long long leftMax=0;
        long long rightMax=0;
        long long water=0;
        
        while(l<r){
            if(arr[l]<=arr[r]){
                if(arr[l]>=leftMax){
                    leftMax=arr[l];
                }
                else{
                    water+=leftMax-arr[l];
                }
                l++;
            }
            else{
                if(arr[r]>=rightMax){
                    rightMax=arr[r];
                }
                else{
                    water+=rightMax-arr[r];
                }
                r--;
            }
        }
        
        return water;
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends