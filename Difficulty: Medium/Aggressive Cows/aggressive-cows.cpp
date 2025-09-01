class Solution {
  public:
    bool possible(vector<int> &s, int mid,int k){
        int count=1;
        int e = s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]-e >=mid){
                count++;
                e=s[i];
            }
            if(count >= k){
                return true;
            }
        }
        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
         sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int start = 1, end= stalls[n-1]-stalls[0];
        int ans=0,mid=0;
        
        while(start<=end){
            mid = start + (end-start)/2;
            
            if(possible(stalls,mid,k)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};