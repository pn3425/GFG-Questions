class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
    /*   my app -> wrong
    
        sort(arr.begin(),arr.end()); 
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i] - arr[i-1] != 1)
            {
                return arr[i-1] + 1;
            }
        }
        return arr.back()+1; */
    
    
    // Brute force -> check everyelement by i, use 2 loops
    
    // Better Approach -> TC-O(N)+O(N) , SC-O(N)
    
    /*
    int n = arr.size()+1;
    int hash[n+1]={0};
    
    for(int i=0;i<arr.size();i++)
    {
        hash[arr[i]]=1;
        
    }
    
    for(int i=1;i<=n;i++)
    {
        if(hash[i]==0)
        {
            return i;
        }
        
    }
    return -1; */
    
    // Optimized Approach -> TC-O(n) SC->O(1)
    
    //1
    int n = arr.size()+1;
    int sum = (n*(n+1))/2;
    int s2=0;
    for(int i=0;i<arr.size();i++)
    {
        s2 += arr[i];
    }
    
    return sum-s2;
    }
};
