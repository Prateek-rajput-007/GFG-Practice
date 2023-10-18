//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
    bool valid(char ch){
    if((ch>='a'&& ch<='z')|| (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
    {
        return 1;
    }
    
    return 0;
}
 
bool palindrome(string a){
    int st=0;
    int end=a.length()-1;
    
    while(st<end){
        if(a[st] != a[end]){
            return 0;
        }
        else{
            st++;
            end--;
        }
    }
    return 1;
} 
 
    
public:
bool sentencePalindrome(string s) 
{
    // code here 
    string temp="";
    
    for(int j=0;j<s.length();j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }
  
    return palindrome(temp);
}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends