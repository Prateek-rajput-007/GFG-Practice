//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


/*You are required to complete this function */
class Solution{
    public:
string encode(string src)
{     
  //Your code here 
    string ans="";
    int count=1;
    int n=src.length();
    for(int i=0;i<n;i++){
        if(src[i]==src[i+1]){
            count++;
        }
        else{
            ans+=src[i];
            ans+=to_string(count);
            count=1;
        }
    }
    return ans;
}     
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        string s;
        getline(cin,s);
        
        Solution obj;
        string res = obj.encode(s);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends