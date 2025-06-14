class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        /*
        Approach 1 : Using Brute Force ( TC-> O(n^2) SP->O(1))
        
        for(int i=0;i<arr.size();i++)
        {
            int temp=arr[i];
            int count=0;
            for(int j=0;j<arr.size();j++)
            {
                if(arr[j] == temp)
                {
                  count++;   
                }
            }
            if(count == 1)
            {
                return temp;
            }
        }
        */
        
        //Approach 2 : Using hash (TC-> O(N) , SC-> O(maxi+1)) Better
        //But it fails for Big Input
        
        /*
        int maxi=0;
        for(int i=0;i<arr.size();i++)
        {
            maxi = max(maxi,arr[i]);
        }
        
        vector<int> hash(maxi + 1, 0);
        
        for(int i=0;i<arr.size();i++)
        {
            hash[arr[i]]++;
        }
        
        for(int i=0;i<arr.size();i++)
        {
            if(hash[arr[i]] == 1)
            {
                return arr[i];
            }
        }
       return -1;*/
       
       //Approach 3: Using Map (To handle big numbers) Better
       // TC-> nlogm + o(n/2 +1)  , SC -> n/2 + 1   (N/2 because every element has 2 repetiton and +1 because 1 needs to added since that is the unique elemt)
       
       
       /*
       map<int,int> mpp;
       for(int i=0;i<arr.size();i++)
       {
           mpp[arr[i]]++;
       }
       
       for(auto it : mpp)
       {
           if(it.second == 1)
           {
               return it.first;
           }
       }
       return -1;*/
       
       //Approach 4 : Using XOR (TC-> O(N), SC -> O(1))
       
       int xor1=0;
       for(int i=0;i<arr.size();i++)
       {
            xor1 = xor1 ^ arr[i];   
       }
       return xor1;
       
    }
};
