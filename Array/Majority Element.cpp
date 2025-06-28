class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        
         //Brute Force -> TC -> O(N^2)
         /*
         for(int i=0;i<arr.size();i++)
         {
             int count=0;
             for(int j=0;j<arr.size();j++)
             {
                 if(arr[i] == arr[j])
                 {
                     count++;
                 }
             }
             if(count>n/2)
             {
                 return arr[i];
             }
         }
         return -1;*/
        
        //Better:  Using Hashing (Map) TC-> O(nlogn) + o(n), SC->O(n)
        /*
        int n = arr.size();
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        
        for(auto it : mpp)
        {
            if(it.second > n/2)
            {
                return it.first;
            }
        }
        return -1;*/
        
        // Optimal: Moores Algorithm
        /* Algo
        
        1) Take first element & set count = 0 (Here count does not mean actual occurence)
        2) Check its occurence if it repeats, increase the count
        3) If you encounter another element decrease the count
        4) In that process if the count = 0, take the next element, (The element after where the zero was achieved)
        5) Do that and get the element as answer
        6) Finally iterate the whole loop for that particular element and check the actual count if count > n/2 that element is your answer
        
        For Eg : 
        [1, 1, 2, 1, 3, 5, 1]
        
        First Ele = 1
        count = 0 -> 1 -> 2 -> 1 -> 2-> 1 -> 0  (Count 0 at arr[5]=5)
        Next Ele = 1
        count = 1
        
        Now check the occurence of the element 1, since it occured 4 times which is greater than 7/2
        Hence Answer is 1
        */
        
        int count = 0;   
        int ele;
        for(int i=0;i<arr.size();i++)
        {
           if(count==0)
           {
               count = 1;
               ele = arr[i];     //Set ele
           }
           else if(arr[i] == ele)  //If element match, count++
           {
               count++;   
           }
           else{
               count--;  //if not, count--, and i++, so next ele
           }
        }
        int cnt=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] == ele){
                cnt++;
            }
        }
        if(cnt > (arr.size()/2))
        {
            return ele;
        }
        return -1;
    }
};
