class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        sort(array.begin(),array.end());
        int d=1;
        for(int j=0;j<n;j++)
        {
            if(array[j]==d)
            {
                d++;
            }
         else
         return d;
        }
        
    }
};
