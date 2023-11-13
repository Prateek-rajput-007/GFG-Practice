//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
                 int count=0;
           
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
                count++;
            else if(s[i]>57 || s[i]<48)
              return false;
              
            
              
        }
        
        for(int i=1;i<n;i++)
        {
            if(s[i] == '.' && (s[i] == s[i-1]))
                return false;
        }
        
        if(count != 3)
            return false;
        
        
        
        string st="";
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                
                
                int num = stoi(st);
                
                if((st.size()>1 && st[0]=='0') || num>255 || num<0)
                    return false;
                st="";
                
                
            }
            else
                st+=s[i];
        }
        
        int num = stoi(st);
                
        if((st.size()>1 && st[0]=='0') || num>255 || num<0)
            return false;
            
        return true;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends