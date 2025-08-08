class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
         int k=0;
    int l=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[k]==s[i])
        {
            k++;
            continue;
        }
        i=l;
        l++;
        k=0;
    }
    return k;
    }
   
};