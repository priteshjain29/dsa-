// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // Your Code Here
    if (head == NULL) return NULL;
    
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* s = head;
    Node* f = head;
    Node* prev = NULL;
    
    while(f and f->next){
        f = f->next->next;
        prev = s;
        s = s->next;
    }
    prev -> next = s->next;
    delete s;
    return head;
    
}