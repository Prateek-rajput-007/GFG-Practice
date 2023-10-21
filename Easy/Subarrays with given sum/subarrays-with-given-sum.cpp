//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int k)
    {
    	//code here.
    	unordered_map<int,int> mp;
    	int sum=0, count=0;
    	for(int i=0;i<n;i++){
    	    sum+=arr[i];
    	    if(sum==k){
    	        count++;
    	    }
    	    if(mp.find(sum-k)!=mp.end()){
    	        count+=mp[sum-k];    
    	    }
    	    mp[sum]++;
    	}
    	return count;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}
// } Driver Code Ends