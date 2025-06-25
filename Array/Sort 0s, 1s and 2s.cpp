class Solution {
  public:
    void sort012(vector<int>& arr) {
        
        //Brute Force -> nlogn if you use merge sort
//---------------------------------------------------------------------------------------  
        //Better Approach -> TC->O(n) SC->o(n)
        /*
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] == 0)
            {
                cnt0++;
            }
            else if(arr[i] == 1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        for(int i=0;i<cnt0;i++)
        {
            arr[i]=0;
        }
        for(int i=cnt0;i<cnt0+cnt1;i++)
        {
            arr[i]=1;
        }
        for(int i=cnt0+cnt1;i<arr.size();i++)
        {
            arr[i]=2;
        }*/
//---------------------------------------------------------------------------------------        
        //Optimal (Dutch National Flag Problem)  TC-> O(n) SC -> O(1)
         
        /*
        
        0       low-1     low      mid-1     mid       high   high+1     n-1
        
        0000000000000     11111111111111     012Unsorted210   22222222222222
        
        
        Example Array -> 
        
        0 1 2 0 1 2      m-mid , l-low, h-high
        m         h
        l
        
        
        arr[mid]=0   (refer the main diagram for more understanding)
        swap(arr[mid],arr[low])
        mid++
        low++
        
        arr[mid]=1
        mid++
        
        arr[mid]=2
        swap(arr[mid],arr[high])  //No mid++ because might get 0,1 which needs to be sorted again
        high--
        
        */
        
        int low=0, mid=0, high=arr.size()-1;
        while(mid <= high){
            if(arr[mid] == 0)
            {
               swap(arr[low],arr[mid]);
               mid++;
               low++;
            }
            else if(arr[mid] == 1)
            {
                mid++;
            }
            else //(arr[mid] == 2)
            {
                swap(arr[high],arr[mid]);
                high--;
            }
        }
        
    }
};
