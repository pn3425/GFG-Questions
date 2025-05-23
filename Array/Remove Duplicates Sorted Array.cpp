class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        // code here
        int i=0;
        for(int j=1;j<arr.size();j++)
        {
            if( arr[j] != arr[i])
            {
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    }
};




/*
Dry Run

   1 2 3 4 5 6 
[1,1,2,2,2,3,3]

i  j   arr[j] != arr[i]  arr[i+1]=arr[j]  i++
0  1     1 != 1 -> F
   2     2 != 1 -> T     arr[1] = arr[2]  0->1
   
1

                            (arr[j] != arr[i])    
j   arr[j]	       arr[i]	    Condition	    Action	                    i	    Updated arr
1	 1	            1	        false	    Do nothing	                    0	[1, 1, 2, 2, 2, 3, 3]
2	 2	            1	        true	    arr[i+1] = arr[j]; i++ → i=1    1	[1, 2, 2, 2, 2, 3, 3]
3	 2	            2	        false	    Do nothing	                    1	[1, 2, 2, 2, 2, 3, 3]
4 	 2	            2	        false	    Do nothing	                    1	[1, 2, 2, 2, 2, 3, 3]
5	 3	            2	        true	    arr[i+1] = arr[j]; i++ → i=2    2	[1, 2, 3, 2, 2, 3, 3]
6	 3	            3	        false   	Do nothing	                    2	[1, 2, 3, 2, 2, 3, 3]






*/
