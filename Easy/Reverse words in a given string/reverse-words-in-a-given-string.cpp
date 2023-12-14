//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string> st;
        string ans="";string p=".";
        for(int i=0;i<S.length();i++){
            string words = "";
            while(S[i]!='.' && i<S.length()){
                words+=S[i];
                i++;
            }
            words.push_back('.');
            st.push(words);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        ans.pop_back();
        return ans;
    } 
};


//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends