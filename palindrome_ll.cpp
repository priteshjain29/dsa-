class Solution{
  public:
    Node* middle(Node* root)
   {
       Node* fast=root;
       Node* slow=root;
       while(fast!=NULL && fast->next!=NULL)
       {
           fast=fast->next->next;
           slow=slow->next;
       }
       return slow;
   }
   Node* reverse(Node* head)
   {
       Node* prev=NULL;
       Node* curr=head,*n=head;
       while(curr)
       {
           n=curr->next;
           curr->next=prev;
           prev=curr;
           curr=n;
       }
       return prev;
   }
   bool check(Node* a, Node* b)
   {
       while(a && b)
       {
           if(a->data!=b->data)
           return false;
           a=a->next;
           b=b->next;
       }
       return true;
   }
    bool isPalindrome(Node *head)
    {
       if(head->next==NULL)
       return true;
       Node* mid=middle(head);
       Node* rev=reverse(mid);
       return check(head,rev);
    }
};