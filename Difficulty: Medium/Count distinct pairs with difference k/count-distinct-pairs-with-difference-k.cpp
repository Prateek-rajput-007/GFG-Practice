class Solution {
  public:
    int TotalPairs(vector<int> nums, int k) {
        // Code here
         int n = nums.size(), count=0;
        unordered_map<int, int> mp;
        
        for(int i=0;i<n;i++)
            mp[nums[i]] += 1;
        
        
        if(k==0) 
        {
            for(int i=0;i<n;i++)
            {
                if(mp[nums[i]] > 1) {
                    count++;
                    mp.erase(nums[i]);
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {   
                if(mp[nums[i]+k]) {
                    count++;
                    mp.erase(nums[i]+k);
                }
            }    
        }
        return count;
    }
};