//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    
    void fun(int n,int sour, int help, int dest){
        if(n==1){
            cout<<"move disk "<<n<<" from rod "<<sour<<" to rod "<<dest<<endl;
            return;
        }
        fun(n-1,sour,dest,help);
        cout<<"move disk "<<n<<" from rod "<<sour<<" to rod "<<dest<<endl;
        fun(n-1,help,sour,dest);
        
    }
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        fun(N,from,aux,to);
        return pow(2,N)-1;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends