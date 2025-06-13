class Solution {

  public:
    bool findSwapValues(vector<int>& a, vector<int>& b) {
        // Your code goes here
         sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int sum1=0,sum2=0;
        for(int i=0;i<a.size();i++){
            sum1 += a[i];
        }
        for(int i=0;i<b.size();i++){
            sum2 += b[i];
        }
        int i=0;//track a
        int j=0;//track b
        while(i<a.size() && j<b.size()){
            int temp_sum1 = sum1 - a[i] + b[j];
            int temp_sum2 = sum2 - b[j] + a[i];
            
            if(temp_sum1 == temp_sum2) return true;
            else if(temp_sum1 > temp_sum2) i++;
            else j++;
        }
        return false;
    }
};