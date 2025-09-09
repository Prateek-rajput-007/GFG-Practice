class Solution {
  public:
    int assignHole(vector<int>& M, vector<int>& H) {
        // code here
          sort(M.begin(),M.end());
          sort(H.begin(),H.end());
        int ans = INT_MIN;
        int N = M.size();
        for(int i=0;i<N;i++){
            ans=max(ans,abs(M[i]-H[i]));
        }
        return ans;
    }
};