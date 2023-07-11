/**** 3 conditions 
either the node to be deleted is :
1. first node
2. last n0de
3. in between two nodes
*/
// User function Template for C++


/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        Node* temp= *head_ref;
        while(temp!=NULL){
            if(temp->data==x){
                if(temp->prev==NULL){
                    *head_ref= temp->next;
                    if(temp->next!=NULL){
                        temp->next->prev=NULL;
                    }
                    
                }
                else if(temp->next==NULL){
                    temp->prev->next=NULL;
                }
                else{
                    temp->next->prev= temp->prev;
                    temp->prev->next= temp->next;
                }
            }
           
            temp= temp->next;
        }
    }
};

