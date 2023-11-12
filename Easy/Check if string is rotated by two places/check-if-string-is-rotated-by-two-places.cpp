//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
         string str11=str1;
        if(str1.size()!=str2.size()){
            return 0;
        }
        if(str1.size()==1 && str2.size()==1){
            if(str1==str2){
                return 1;
            }
            return 0;
        }
        int n=str1.size();
        reverse(str1.begin(),str1.end());
        reverse(str1.begin(),str1.begin()+n-2);
        reverse(str1.begin()+n-2,str1.end());
        if(str1==str2){
            return 1;
        }
        
        reverse(str11.begin(),str11.end());
        reverse(str11.begin(),str11.begin()+2);
        reverse(str11.begin()+2,str11.end());
        if(str11==str2){
            return 1;
        }
        return 0;
    }

};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends