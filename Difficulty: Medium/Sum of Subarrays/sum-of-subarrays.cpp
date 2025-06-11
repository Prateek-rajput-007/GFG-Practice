// User function template for C++

class Solution {
  public:
    long long subarraySum(vector<int>& a) {
        // Your code goes here
         long long n = a.size();
    //     vector<long long> res;
    // int curr = 0;
    // for(int i = 0; i < n; i++){
    //     curr = 0;
    //     for(int j = i; j < n; j++){
    //         curr += arr[j];
    //         res.push_back(curr);
    //     }
    // }
    // int totalSum = 0;
    // for(int i = 0; i < res.size(); i++){
    //     totalSum += res[i];
    // }
    // return totalSum;
      long globalSum = 0;
        long mod = 1000000007;
        
        for(int i = 0;i<n;i++){
            
          long currentSum =   ((i+1) * (n-i)) * a[i] ;
          
          globalSum = (globalSum%mod + currentSum%mod)%mod;
        }
        
        return globalSum;
    }
};