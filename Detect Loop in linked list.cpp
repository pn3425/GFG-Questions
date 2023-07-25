class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        map<Node*,bool>visited;
        if(head==NULL)
        {
         return false;
        }
        Node*temp=head;
        while(temp!=NULL)
        {
           if(visited[temp]==true)
           {
               return 1;
           }
           
           visited[temp]=true;
           temp=temp->next;
            
        }
        return false;
    }
};
