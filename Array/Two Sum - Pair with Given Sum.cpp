class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        
     //Brute Force -> O(n^2)
     /*
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++) or for(int j=i+1;j<n;j++)
        {
            if(i==j)continue;
            if(nums[i]+nums[j]==target)
            {
                return i,j;
            }
        }
     }*/
     
     // Better -> TC -> O(n * nlogn) SC -> O(n) Using Map
     //Check for target - arr[i], if not there store the current i element in map with index and keep iterating 
     
     /*
     map<int,int>mpp;
     for(int i=0;i<arr.size();i++){
        int a = arr[i]; 
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            return true; //return {mpp[more],i}
        }
       mpp[a]=i;
     
     }
     return false;
    }*/
    
    //Optimal -> Using two pointer approach O(n)+nlogn for sorting, SC -> O(1)
    //i on first element, j on last 
    //Sort the array so that if the sum is less than you can do i++ or j--
    
    int i=0;
    int j=arr.size()-1;
    sort(arr.begin(),arr.end());
    while(i<j)
    {
        int sum = arr[i] + arr[j];
        if(sum == target)
        {
            return true;
        }
        
        else if(sum<target)
        {
            i++;
        }
        
        else if(sum>target)
        { 
            j--;
        }
    }
    return false;
    }
};
