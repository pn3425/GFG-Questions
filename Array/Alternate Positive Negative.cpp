// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        
        //Brute Force : TC -> O(N) + O(N) & SC -> O(N) ,CODE WRONG BELOW (Valid for equal posi & neg)
        
        /*Eg Array : [3,1,-2,-5,2,-4]  
        
        posarr : [3,1,2]  Negarr: [-2,-5,-4]
        
        Final array: [3,-2,1,-5,2,-4]
              index:  0  1 2  3 4  5    
              
              Positives comes in -> 2*i index
              Negatives comes in -> 2*i+1
        
        */
    
        /*
        int n = arr.size();
        int posarr[n/2];
        int negarr[n/2];
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] > 0)
            {
                posarr[i]=arr[i];
            }
            else
            {
                negarr[i]=arr[i];
            }
        }
        
        for(int i=0;i<n/2;i++)
        {
            arr[2*i]=posarr[i];
            arr[2*i+1]=negarr[i];
        }*/ 
 //---------------------------------------------------------------------------------------
    
    // Optimal -> TC -> O(N), SC -> O(N) Pass Reduced
    /*
    Just putting pos element in ans vector at even index & neg at odd index
     (Valid for only equal posi  & negative)
    */
    /*
    int n = arr.size();
    vector<int> ans(n,0);
    int PosiIndex=0, NegIndex=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            ans[NegIndex]=arr[i];
            NegIndex += 2;
        }
        else
        {
            ans[PosiIndex]=arr[i];
            PosiIndex += 2;
        }
    }*/
   
//-----------------------------------------------------------------------------------------

   // ACTUAL ANSWER VARIETY 2 
   
    int n = arr.size();
    vector<int> pos,neg;
    
    for(int i=0;i<n;i++)  // Putting the pos/neg element in the vector resp
    {
        if(arr[i] >= 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }
    
    if(pos.size() > neg.size()){
        for(int i=0;i<neg.size();i++)    //For equal number of + & - elements
        {
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        
        int index = neg.size()*2;         // For remaining +ve elements
        for(int i=neg.size();i<pos.size();i++)
        {
            arr[index]=pos[i];
            index++;
        }
    }
        
    else{
        for(int i=0;i<pos.size();i++)    //For equal number of +ve & -ve elements
        {
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        
        int index = pos.size()*2;         // For remaining -ve elements
        for(int i=pos.size();i<neg.size();i++)
        {
            arr[index]=neg[i];
            index++;
        }
    }    

    }
};
