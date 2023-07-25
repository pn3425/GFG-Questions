class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        if(head==NULL)
        return NULL;
        
        int cnt=0;
        node* prev=NULL;
        node* curr=head;
        node* fwd=NULL;
        
        while(curr!=NULL && cnt<k)
        {
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
            cnt++;
        }
        
      if(fwd!=NULL)
      {
        head->next=reverse(fwd,k);  
      }
      return prev;
    }
};
