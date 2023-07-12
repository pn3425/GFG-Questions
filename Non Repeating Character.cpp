//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int i=0;
       int arr[123]={0};
      int ar[S.size()]={0};
       while(S[i]!='\0')
       {
         int d=S[i];
         arr[d]++;
         ar[i]=d;
         i++;
       }
      for(int i=0;i<S.size();i++)
      {
         if(arr[ar[i]] == 1 )
         {
             
             return char(ar[i]);
         }
         
      }
      
      return '$';
             
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
