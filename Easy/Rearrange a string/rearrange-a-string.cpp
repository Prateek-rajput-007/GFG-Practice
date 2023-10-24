//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        //code here.
        int n=str.length();
        int sum=0;string str1="";
        for(int i=0;i<n;i++){
            if(str[i]>='0' && str[i]<='9'){
                sum+=(str[i]-'0');
            }
            else if(str[i]>='A' && str[i]<='Z'){
                str1+=str[i];
            }
        }
        sort(str1.begin(),str1.end());
        if(sum>0){
            return str1+to_string(sum);
        }
        return str1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends