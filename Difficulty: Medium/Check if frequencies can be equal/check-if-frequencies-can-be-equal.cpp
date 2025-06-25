class Solution {
  public:
    bool sameFreq(string& s) {
        // code here
          int n=s.size();
        if(n==0) return 0;
        unordered_map<char,int>mp;
        int maxi=0,mini=INT_MAX;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second>maxi){
                maxi=it.second;
                count=1;
            }
            else if(it.second==maxi){
                count++;
            }
            if(it.second<mini) mini=min(mini,it.second);
        }
        int distinct=mp.size();
        if(maxi==mini) return true;
        if(maxi-mini==1 && count==1) return true;
        if(maxi*count+1==n) return true;
        
        return false;
    }
};