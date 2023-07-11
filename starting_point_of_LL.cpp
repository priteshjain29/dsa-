/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL && head->next == NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* pos = head; // will be used after we find whether there is a cycle in LL or not
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;
            if(slow == fast)
                break;   
        }
        while(slow != pos){
            slow = slow -> next;
            pos = pos -> next;
        }
        return pos;
        return NULL;
    }
};*/
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return NULL;
    
        ListNode *slow  = head;
        ListNode *fast  = head;
        ListNode *entry = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {                      // there is a cycle
                while(slow != entry) {               // found the entry location
                    slow  = slow->next;
                    entry = entry->next;
                }
                return entry;
            }
        }
        return NULL;      
    }
};