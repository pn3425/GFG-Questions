/*
 APP1 -> Brute Force solved in Naukari (https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1)
 APP2 -> Optimized (TC -> O(n1+n2) & SC -> O(n1+n2) (That too only for returning))

APP2 : TWO Pointer Approach ( i PONTER on a, j POINTER on b)

1) Check if a[i]<b[j], if true then check if UnionArr is empty OR it has element which is equal to the curret a[i] if not then only pushback
2) Similarly for a[i]>b[j] else block
3) Now if any of the array gets exhausted we need to continue to the other array and get the elements and store in the unionArray
4) Hence line 41 & line 51

*/
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
   
        vector<int>UnionArr;
        int n1 = a.size();
        int n2= b.size();
        int i=0;
        int j=0;
        while(i<n1 && j<n2)
        {
            if(a[i] <= b[j]){
                if(UnionArr.size() == 0 || UnionArr.back() != a[i])
                {
                    UnionArr.push_back(a[i]);
                }
                i++;
            }
            else{
                if(UnionArr.size() == 0 || UnionArr.back() != b[j])
                {
                    UnionArr.push_back(b[j]);
                }
                j++;
            }
        }
        while(j<n2) //This means the array 1 is exhausted hence picking element from array 2
        {
                 if(UnionArr.size() == 0 || UnionArr.back() != b[j])
                {
                    UnionArr.push_back(b[j]);
                }
                j++;
            
        }
        
        while(i<n1) //This means array 2 is exhausted hence picking element from array 1
        {
                   if(UnionArr.size() == 0 || UnionArr.back() != a[i])
                {
                    UnionArr.push_back(a[i]);
                }
                i++;
            
        }
        
        return UnionArr;
    }
};
