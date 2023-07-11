// Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};


class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
        if(head_ref==NULL){
            return head_ref;
        }
        Node *temp=head_ref;
        int i=1;
        while(i<x){
            temp=temp->next;
            i++;
        }
        
        if(temp->prev !=NULL ){
        (temp->prev)->next=temp->next;
        }
        if(temp->next !=NULL ){
        (temp->next)->prev=temp->prev;
        if(temp->prev==NULL){
            head_ref=temp->next;
        }
        }
        delete(temp);
        return head_ref;
    }
};