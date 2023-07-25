class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* prev=NULL;
        Node* curr=head;
        Node* fwd=NULL;
        while(curr!=NULL)
        {
         fwd=curr->next;
         curr->next=prev;
         prev=curr;
         curr=fwd;
        }
    
    return prev;
    
    }
    
};
