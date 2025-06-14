class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) {
        // code here
         int n = arr.size();
        if (n == 0) return 0;
        
        int max_non_circular = arr[0];
        int current_max = arr[0];
        
        int min_non_circular = arr[0];
        int current_min = arr[0];
        
        int total_sum = arr[0];
        
        for (int i = 1; i < n; ++i) {
            total_sum += arr[i];
            
            // Compute maximum subarray sum (non-circular)
            current_max = max(arr[i], current_max + arr[i]);
            max_non_circular = max(max_non_circular, current_max);
            
            // Compute minimum subarray sum
            current_min = min(arr[i], current_min + arr[i]);
            min_non_circular = min(min_non_circular, current_min);
        }
        
        // If all elements are negative, the maximum subarray sum is the maximum element
        if (total_sum == min_non_circular) {
            return max_non_circular;
        }
        
        // The maximum circular subarray sum is the maximum of:
        // 1. Maximum non-circular subarray sum
        // 2. Total sum minus the minimum subarray sum
        return max(max_non_circular, total_sum - min_non_circular);
    }
};