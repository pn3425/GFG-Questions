//Back-end complete function Template for C++
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
    /* APP1 : Brutte Force
    vector<int>ans;
    int vis[b.size()]={0};
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j] && vis[j]==0)
            {
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i])break;
        }
    }
       return ans;
    }*/
    
    //App2
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            // ans.push_back(a[i]); //This is to even keep duplicates as suggested by striver
            // i++;
            // j++;
            
             if (ans.empty() || ans.back() != a[i]) {  //This is written to avoid duplicates
                    ans.push_back(a[i]);
                }
                i++;
                j++;
        }
        
    }
    return ans;
    }
};
