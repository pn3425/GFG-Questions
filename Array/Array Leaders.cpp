

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
          
         //Brute Force : TC -> O(n^2)  SC -> o(N)
         /*
         
         Take element and check till right if anything greater than that if YES, choose next or that element is the LEADER
         
         for(int i=0;i<arr.size();i++)
         {
           bool leader = true;
        
               for(int j=i+1;j<arr.size();j++)
               {
                   if(arr[j] > arr[i])
                   {
                       leader = false;
                       break;
                   }
               }
               
            if(leader = true) ans.add(arr[i]);
         }
         */
//-----------------------------------------------------------------------------------------


        // Optimal  -  TC -> O(N) if sorted orderthen Nlogn, SC-> O(N) for returning
         
        /*
        1) Start iterating from back
        2) Have maxi = INT_MIN
        3) check if arr[last] > maxi, if YES update maxi and update the Leader
        4) Do this from last element to first
        */
        int n = arr.size();
        vector<int> ans;
        int maxi = INT_MIN;
        for(int i=n-1 ; i>=0 ; i--)
        {
            if(arr[i] >= maxi)
            {
                ans.push_back(arr[i]);
            }
            maxi = max(maxi, arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
