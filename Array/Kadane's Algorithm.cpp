class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        
        //Brute Force : TC -> O(N^3), SC -> O(1)
        /*
        int maxi = INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                int sum=0;
                for(int k=i;k<j;k++)
                {
                    sum=sum+arr[k];
                    maxi=max(sum,maxi);
                }
            }
        }*/
        
        //Better : TC -> O(N^2), SC -> O(1)
        
         /*
        int maxi = INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            int sum=0;
            for(int j=i;j<arr.size();j++)
            {
                sum=sum+arr[j];
                maxi=max(sum,maxi);
                
            }
        }*/
        
        //Optimal : Kadanes Algorithm TC -> O(n) & SC-> O(1)
        
        /*
        1) Initialize sum=0 & maxi to INT_MIN
        2) Add arr[i] to sum where i=0 & so on
        3) If the sum is > than maxi, update maxi & for further iterations 
        4) If the sum is < 0, initialize the sum back to 0
        
        */
        
        int sum = 0;
        int maxi = INT_MIN;
        
        for(int i=0;i<arr.size();i++)
        {
            sum = sum + arr[i];
            
            if(sum>maxi)
            {
                maxi = sum;
            }
            
            if(sum<0)
            {
                sum = 0;
            }
        }
        return maxi;
        
        //For subarray which was used for maximum sum
        
        /*
        int sum = 0;
        int maxi = INT_MIN;
        int ansstart=-1, ansend=-1;
        int start = 0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(sum==0) start = i;
            sum = sum + arr[i];
            
            if(sum>maxi)
            {
                maxi = sum;
                ansstart=start;
                ansend=i;
            }
            
            if(sum<0)
            {
                sum = 0;
            }
        }
             vector<int> result;
        if (ansStart != -1 && ansEnd != -1) {
            for (int i = ansStart; i <= ansEnd; i++) {
                result.push_back(arr[i]);
            }
        }

        return result;
        
        
        
        */
    }
};
