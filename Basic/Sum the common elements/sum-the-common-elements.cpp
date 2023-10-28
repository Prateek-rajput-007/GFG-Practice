//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int commonSum(int n1, int n2, vector<int> &arr1, vector<int> &arr2) {
        // code here
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int i=0,j=0,n=arr1.size(),m=arr2.size();
        long long   d=1e9+7;
        long long sum=0;
        set<int> st;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
            else if(arr1[i]==arr2[j]){
                st.insert(arr1[i]);
                i++;j++;
            }
        }
        for(auto it: st){
            sum+=it;
            sum%=d;
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n1;
        scanf("%d",&n1);
        
        
        int n2;
        scanf("%d",&n2);
        
        
        vector<int> arr1(n1);
        Array::input(arr1,n1);
        
        
        vector<int> arr2(n2);
        Array::input(arr2,n2);
        
        Solution obj;
        int res = obj.commonSum(n1, n2, arr1, arr2);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends