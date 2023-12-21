//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	bool commonSubseq (string a, string b)
	{
	    // your code here
	   //  unordered_map <char, int> mpp;
    //     for(int i = 0; i < a.size(); i++)
    //         mpp[a[i]]++;
       
    //     for(int i = 0; i < b.size(); i++)
    //     {
    //         if(mpp.find(b[i]) != mpp.end())
    //             return true;
    //     }
    //     return false;
     int hash[26] = {0};

     

     for(int i = 0; i < a.length(); i++) {

         if(hash[a[i]-'A'] == 0) {

             hash[a[i]-'A']++;

         }

     }

     

     for(int i = 0; i < b.length(); i++) {

         if(hash[b[i]-'A'] == 1) {

             return true;

         }

     }

     

     return false;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--) 
	{
		string a, b; cin >> a >> b;
		Solution ob;
		cout << ob.commonSubseq (a, b) << '\n';
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends