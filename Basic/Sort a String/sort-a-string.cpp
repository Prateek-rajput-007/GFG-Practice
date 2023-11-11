//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}




// } Driver Code Ends




string sort(string s){
    //complete the function here
    // char temp;
     int n=s.length();
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(s[i]>s[j]){
    //             temp=s[i];
    //             s[i]=s[j];
    //             s[j]=temp;
    //         }
    //     }
    // }
    // return s;
    vector<int> freq(26,0);string ans="";
    for(int i=0;i<n;i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        char c = 'a'+i;
        while(freq[i]--){
            ans+=c;
        }
    }
    return ans;
}