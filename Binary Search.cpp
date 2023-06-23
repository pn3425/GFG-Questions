class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int i=0;
        int j=n-1;
        int mid = i+(j-i)/2;
        
        while(i<=j){
            if(arr[mid]==k)
            {
              return mid;
            }
            

            if(k>arr[mid])
            {
                i=mid+1;
            }            
            
            else
            {
                j=mid-1;
            }
            
           mid = i+(j-i)/2; 
        
        }
        return -1;
        
    }
    
};
