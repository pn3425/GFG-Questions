// User function template in C++

//APPROACH 1 BRUTE FORCE (Using Set, TC -> n1logn + N2logn + O(n1+n2) , SC -> O(n1+n2) + O(n1+n2)(Temp)  )
class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> st;    //Using set here because it stores everything in sorted order and will only store unique elements, UNION IS COMBINE (UNIQUE ELEMENT) 
        for(int i=0;i<a.size();i++)
        {
            st.insert(a[i]);
        }
        for(int i=0;i<b.size();i++)
        {
            st.insert(b[i]);
        }
        int stsize = st.size();
        return stsize; //Here only returing the size 
    }
};

/* If you want to return the array
    int union[stsize];   Creating a union array of size of set
    i=0;
    for(auto it : st)
    {
      union[i]=it;
      i++;
    }
    
    OR USING VECTOR
    
    vector<int> temp;
    for(auto it : st)
    {
        temp.push_back(it);
    }
*/
