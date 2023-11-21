//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int maxDiffIndex(int A[], int N)
    {
        if(N<2){
            return 0;
        }
         unordered_map<int,int> map;
        int ans=0;
        for(int i=0; i<N; i++)
        {
            if(map.find(A[i])!=map.end())
            {
                ans=max(ans,i-map[A[i]]);
            }
            else
            map[A[i]]=i;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         Solution ob;
         cout<<ob.maxDiffIndex(a, n)<<"\n";
     }
	return 0;
}
// } Driver Code Ends