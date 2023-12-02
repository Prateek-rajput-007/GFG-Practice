//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int N)
    {
        int cnt=0,ans=0,onecnt=0,num=N,k;
        while(N>0){
            if(N%2==1){
                onecnt++;
            }
            N/=2;
        }
        k=onecnt;
        N=num;
        while(N>0){
            if(N%2==1){
                onecnt--;
                ans+=((onecnt*pow(2,cnt))+(cnt*pow(2,cnt-1)));
            }
            cnt++;
            N/=2;
        }
        return ans+k;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends