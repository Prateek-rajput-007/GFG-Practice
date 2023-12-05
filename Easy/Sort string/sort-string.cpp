//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{	public:
		string SortedString(string s)
		{
		  // Code here
		   vector<char>v,c;
          bool flag=false;
          if(s[0]=='a' ||s[0]=='e' || s[0]=='i' || s[0]=='o' ||s[0]=='u'){
                  flag=true;
              }
          
           for(int i=0; i<s.size();i++){
              if(s[i]=='a' ||s[i]=='e' || s[i]=='i' || s[i]=='o' ||s[i]=='u'){
                  v.push_back(s[i]);
              }
              else{c.push_back(s[i]); }
          }
          
          int i=0;
          string ans="";
          sort(v.begin(),v.end());
          sort(c.begin(),c.end());
          
          for(i=0; i<v.size(); i++){
              if(flag){
              ans+=v[i];
              ans+=c[i];}
              else{
                  ans+=c[i];
                  ans+=v[i];
              }
          }
          for(int j=i; j<c.size(); j++){
              ans+=c[j];
          }
          return ans;
		}

};


//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string s;
	    cin >> s;
	    Solution ob;
	    string ans=ob.SortedString(s);
	    cout<<ans<<"\n";
    }
	return 0;
}
// } Driver Code Ends