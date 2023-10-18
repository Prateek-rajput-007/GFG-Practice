//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    
        string reverseWithSpacesIntact (string s)
        {
            //code here.
               int l=0;
            int r=s.size()-1;
            
            while(l<r)
            {
                if(s[l]==' ')
                l++;
                else if(s[r]==' ')
                r--;
                else
                {
                    swap(s[l],s[r]);
                    l++;
                    r--;
                }
            }
            
            return s;
        }
      

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout << ob.reverseWithSpacesIntact (s) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends