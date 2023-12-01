//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	   // sort(pat.begin(),pat.end());
	   // sort(txt.begin(),txt.end());
	   int n=pat.size();
        int m=txt.size();
       vector<int>freq(26,0),temp(26,0);
       int ans=0;
       for(int i=0;i<n;i++){
           freq[pat[i]-'a']++;
       }
       int i=0,j=0;
       while(n--){
           temp[txt[j++]-'a']++;
           
       }
       if(freq==temp)ans+=1;;
       while(j<m){
           temp[txt[i++]-'a']--;
           temp[txt[j++]-'a']++;
           if(freq==temp)ans+=1;
       }
       return ans;


	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends