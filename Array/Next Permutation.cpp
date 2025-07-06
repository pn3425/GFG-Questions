#include<bits/stdc++.h>
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        
        //Brute Force : TC -> O(N! * N)
        /*
        1) Get all the permutation in sorted order
        2) Do linear search of the input arr
        3) Give output of the arr/permutation next to the founded arr
        4) In case so last permutation as input, give the first occurence of permutation as output
        */
//-----------------------------------------------------------------------------------------        
        //Better :
        
        // next_permutation(arr.begin(),arr.end()); Directly Using STL
        
//------------------------------------------------------------------------------------------

        //Optimal : Goal is to find next permutation, TC -> O(3n) SC -> O(1)
        
        /*
        arr[] = [2,1/,5,4,3,0,0,]   / is breakpoint
        
        
        1) Longer prefix match    (Take 2,1 as prefix ),
           a[i]<a[i+1]
           
        2) Find > 1, but the smallest one, so that you can stay close  (option of 5,4,3,0 but greater than 1/breakpoint) hence 3 (2,3,_,_,_,_,_,_)
        
        3) Try to place remaining in sorted order (1,5,4,0,0, in sorted) (2,3,0,0,1,5,4)
        
        Hence you get the smallest post input arr.
        */
        
        int ind = -1;
        int n = arr.size();
        
        for(int i=n-2;i>=0;i--)    //Findind the breakpoint
        {
            if(arr[i] < arr[i+1])
            {
                ind = i;
                break;
            }
        }
        
        if(ind == -1){                    // If the permutation is last perm as input, hence the reversal of the last would be the answer
            reverse(arr.begin(),arr.end());
            return;
        }
        
        for(int i=n-1;i>ind;i--){      // Taking the next smallest after the arr[ind]
            
            if(arr[i] > arr[ind]){
                swap(arr[i],arr[ind]);
                break;
            }
        }
        
        reverse(arr.begin() + ind + 1, arr.end());  // Sort the remaining numbers
        
        
    }
};
