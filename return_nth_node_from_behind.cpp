/*Run a loop and move a ref pointer till Nth Node .
Now start a pointer from first Node and name it as curr/main_ptr pointer.
Run a loop moving both main_ptr pointer and ref pointer until ref pointer reaches last node. 
When the ref pointer will reach the last node, the main pointer will point to the (length of linked list- n+1) postion which is the position of nth node from last but from the head of the linked list.
Now return the data of the node of the main_ptr pointer.*/
//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
        //using two pointers, similar to finding middle element.
        Node *currNode = head , *nthNode = head;
        
        //traversing first n elements with first pointer.
        while(n!=0)
            {
                if(currNode==NULL)
                    return -1;
                currNode = currNode->next;
                n--;
            }
        //now traversing with both pointers and when first pointer gives null 
        //we have got the nth node from end in second pointer since the first 
        //pointer had already traversed n nodes and thus had difference of n 
        //nodes with second pointer.
        while(currNode!=NULL)   
            {
                nthNode = nthNode->next;
                currNode = currNode->next;
            }
        
        //returning the data of nth node from end.
        if(nthNode!=NULL)
            return nthNode->data;
        else
            return -1;
            
    }
};
