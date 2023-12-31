//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        // map<string,int>m;
        // vector<string>v;
        // int max=0;
        // string name="";
        // for(int i=0;i<n;i++){
        //     m[arr[i]]++;
        // }
        // for(auto i:m){
        //     if(i.second>max){
        //         max=i.second;
        //         name=i.first;
        //     }
        // }
        // v.push_back(name);
        // v.push_back(to_string(max));
        // return v;
        map<string,int>mp;
        string winnerName="";
        int max_vote=-1;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto val: mp)
        {
           if(val.second>max_vote)
           {
               max_vote=val.second;
               winnerName=val.first;
           }
        }
        return {winnerName,to_string(max_vote)};
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends