//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
               transform(s.begin(), s.end(), s.begin(), ::tolower);

        int arr[26]={0};
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                arr[s[i]-'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                return 0;
            }
        }
        return 1;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends