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
    
         // 1 : Using sum of first natural number
         
    /*
    int n = arr.size()+1;
    int sum = (n*(n+1))/2;
    int s2=0;
    for(int i=0;i<arr.size();i++)
    {
        s2 += arr[i];
    }
    
    return sum-s2;
    }*/
    
    
        // 2.1 :   Using XOR but with 2 loops, 1^0=1 , 2^2=0
        //{1,2,4,5}
    
    /*
    int n = arr.size()+1; //Considering since in question array of size n-1
    int xor1=0;
    for(int i=1;i<=n;i++)    //if n = 5, then loop is from 1 to 4
    {
        xor1 = xor1 ^ i;      //1^2^3^4^5
    }
    int xor2=0;
    for(int i=0;i<n-1;i++)
    {
        xor2 = xor2 ^ arr[i];  //1^2^4^5
    }
    
    return xor1^xor2;
    
    } */   
    
       // 2.2 : Using one loop only
       
       //{1,2,4,5}
       
     int n = arr.size()+1;
     int xor1=0;
     int xor2=0;
     
     for(int i=0;i<n-1;i++) //if n=5, loop runs from 0->3
     {
         xor2 = xor2 ^ arr[i];  // 1^2^4^5
         xor1 = xor1 ^ (i+1);   // 1^2^3^4
                
     }
     xor1 = xor1 ^ n;  // 1^2^3^4^5
     return xor2^xor1;
    }
     
}; 
