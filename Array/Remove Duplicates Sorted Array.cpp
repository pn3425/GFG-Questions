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
⚙️ Step-by-step working:

We use two pointers:

i → points to the last unique element found so far.
j → scans the array from left to right.

Whenever a new unique element is found:
Place it next to the last unique (arr[i+1] = arr[j]).

Move i forward.

At the end:
The number of unique elements = i+1.

arr = [1, 1, 2, 2, 3, 3, 3, 4]

Step-by-step:

Start: i = 0, so arr[i] = 1.

Loop:

j = 1 → arr[1] = 1, arr[i] = 1 → duplicate → do nothing.

j = 2 → arr[2] = 2, arr[i] = 1 → new unique
→ arr[i+1] = arr[2] → arr[1] = 2 → array becomes [1, 2, 2, 2, 3, 3, 3, 4].
→ i = 1.

j = 3 → arr[3] = 2, arr[i] = 2 → duplicate → skip.

j = 4 → arr[4] = 3, arr[i] = 2 → new unique
→ arr[i+1] = arr[4] → arr[2] = 3 → [1, 2, 3, 2, 3, 3, 3, 4].
→ i = 2.

j = 5 → arr[5] = 3, arr[i] = 3 → duplicate → skip.

j = 6 → arr[6] = 3, arr[i] = 3 → duplicate → skip.

j = 7 → arr[7] = 4, arr[i] = 3 → new unique
→ arr[i+1] = arr[7] → arr[3] = 4 → [1, 2, 3, 4, 3, 3, 3, 4].
→ i = 3.

Loop ends.

Return i+1 = 4.
*/


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
