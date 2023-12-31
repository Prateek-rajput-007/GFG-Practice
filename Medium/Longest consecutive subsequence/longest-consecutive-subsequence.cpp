//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      sort(arr,arr+n);
      int ans=1,pre=arr[0], curr=1;
      for(int i=1;i<n;i++){
          if(arr[i]==pre+1){
              curr++;
          }
          else if(arr[i]!=pre){
              curr=1;
          }
          pre=arr[i];
          ans=max(ans,curr);
      }
      return ans;
    }
};


//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends