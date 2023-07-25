class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    
    int getMiddle(Node *head)
    {
       
       if(head==NULL)
       {
           return -1;
       }
       int count=0;
       Node* temp=head;
       while(temp!=NULL)
       {
         
           temp=temp->next;
            count++;
           
       }
       
        int cnt=0;
        int ans=count/2;
        temp=head;
        
         while(cnt<ans && temp!=NULL)
         {
             temp=temp->next;
             cnt++;
         }
        
        int finalans = temp->data;
        return finalans ;      
     }

};
