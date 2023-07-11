// INSERT AT BEGINNING AND END OF A LL
class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* temp=new Node(x);
       temp->next=head;
       head=temp;
       return head;
    }
       //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* toInsert=new Node(x);
       Node* temp=head;
       if(head==NULL){
          head=toInsert;
          return head;
       }
       else{
       while(temp->next!=NULL){
           temp=temp->next;
       }
       temp->next=toInsert;}
       return head;
    }
};
