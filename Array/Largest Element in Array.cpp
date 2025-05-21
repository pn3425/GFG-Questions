// User function Template for C++

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int max = arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
          if(arr.size() == 1)
            {
                return arr[0];
            }
        return max;
    }
       
};
