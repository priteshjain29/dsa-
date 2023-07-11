// count nodes in a LL
class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        if(head == NULL) return 0;
        Node* temp = head;
        int cnt = 1;
        while(temp -> next != NULL){
            cnt++;
            temp = temp -> next;
        }
        return cnt;
    
    }
};