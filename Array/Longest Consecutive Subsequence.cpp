class Solution {
  public:
/*  
    bool linearsearch(int arr[],int num)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i] == num)
            {
                return true;
            }
        }
        return false;
    }*/

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
 
        // Brute Force : TC -> O(n^2)  SC -> O(1)
        /*
         int longest = 1;                       //Set longest to 1 
         for(int i=0;i<n;i++) 
         { 
              int x = arr[i];                  // Pick first element and set to x
             int count = 1;                    // Initialize count = 1
         
         while(linearsearch(arr,x+1) == true)  //Find the x+1 element in array
        {
          count++;                          // If found, increase count
          x = x +1;                         // And increase x, do until the condition satisfies
        }
        longest = max(longest,count);
        
    
       }
       return longest; */
       
//----------------------------------------------------------------------------------------

    //Better : 
    
    /*
    1) Sort the array 
    Eg : [2,6,1,9,4,5,3] -> sorted [1,2,3,4,5,6,9]
    
 
count          if(arr[i]-1 == lastsmaller      lastsmaller     longest    lastsmaller != arr[i]    
0                    (1-1) 0 != lastsmaller       INT_MIN           1         0 != 1
1                    (2-1) 1 == 1                    1              1           NA 
2                    (3-1) 2 == 2                    2              2           NA
3                    (4-1) 3 == 3                    3              3           NA
4                    (5-1) 4 == 4                    4              4           NA
5                    (6-1) 5 == 5                    5              5           NA
6             
    
    */
    if(arr.size()==0) return 0;
    
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int lastsmaller = INT_MIN;
    int count = 0;
    int longest = 1;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] - 1 == lastsmaller)     
        {
            count = count + 1;
            lastsmaller = arr[i];
        }
        else if(lastsmaller != arr[i]){
            count = 1;
            lastsmaller = arr[i];
        }
        longest = max(longest,count);
    }
      
       return longest;
    }
 
};
