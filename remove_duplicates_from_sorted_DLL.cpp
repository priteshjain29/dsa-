class Solution
{
public:

    Node * removeDuplicates(struct Node *head)
    {
        // Your code here
        if(head->next==NULL)
        {
            return head;
        }
         Node * temp=head->next;
        while(temp!=NULL)
        {
            if(temp->data==temp->prev->data )
            {
                
                temp->prev->next=temp->next;
                if(temp->next!=NULL)
                {
                  temp->next->prev=temp->prev;  
                }
                temp=temp->next;
            }
            else
            {
                temp=temp->next;
            }
        }
        return head;
    }
};