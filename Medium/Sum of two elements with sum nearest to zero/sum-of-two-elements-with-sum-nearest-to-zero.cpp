//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
             sort(arr,arr+n);
            int i=0;
            int j=n-1;
            int mx=INT_MAX;
            while(i<j)
            {
                if(abs(arr[i])>abs(arr[j]))
                {    int sum=arr[i]+arr[j];
                    i++;
                    if(abs(mx)>abs(sum))
                    {
                        mx=sum;
                    }
                }
                else
                {
                    int sum=arr[i]+arr[j];
                     j--;
                    if(abs(mx)>=abs(sum))
                    {
                        mx=sum;
                    }
                }
            }
            return mx;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends