class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    
     unordered_map<char,bool> visited;
     string st;
     
     for(int i=0;i<str.length();i++)
     {
         if(visited[str[i]]==true)
         {
             continue;
         }
         else
         {
           visited[str[i]]=1;
          // st.push_back(str[i]);
           st=st+str[i];   
         }
     }
     return st;  
	}
};
