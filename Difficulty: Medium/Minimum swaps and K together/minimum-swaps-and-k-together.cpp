// Final function implementation
class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        // code here
       int start=0, end= arr.size()-1;
       int swaps=0;
       
       while(start <= end){
           if(arr[start]<=k){
               start++;
           }
           else if(arr[end]>k){
               end--;
           }
           else{
               swap(arr[start++],arr[end--]);
               swaps++;
           }
       }
       return swaps;
    }
};
