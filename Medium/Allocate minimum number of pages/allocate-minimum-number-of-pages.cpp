//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N){
            return -1;
        }
        int end=0, start=INT_MIN,ans;
        for(int i=0;i<N;i++){
            start=max(A[i],start);
            end+=A[i];
        }
        int page=0,count=0, mid;
        while(start<=end){
            mid = start +(end-start)/2;
            page=0,count=1;
            for(int i=0;i<N;i++){
                page=page+A[i];
                if(page>mid){
                    count++;
                    page=A[i];
                }
            }
            if(count<=M){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends