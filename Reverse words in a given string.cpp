class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
       int l=S.length()-1;
       string str="",ans="";
       stack<string>st;
       for(int i=0;i<S.length();i++)
       {
           if(S[i]=='.')
           {
             st.push(str);
             st.push(".");
             str="";
             
           }
           else
           {
             str+=S[i];
           }
       }
       st.push(str);
       while(!st.empty())
       {
           ans+=st.top();
           st.pop();
       }
       return ans;
    } 
};
