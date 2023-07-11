/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = 0, m = 0;
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        while(curr1 != NULL){
            n++;
            curr1 = curr1->next;
        }
        while(curr2 != NULL){
            m++;
            curr2 = curr2->next;
        }
        int d = abs(n - m);
        if(n > m){
            while(d){
                headA = headA -> next;
                d--;
            }
        }
        else{
            while(d){
                headB = headB -> next;
                d--;
            }
        }
        while(headA!=NULL && headB!=NULL){
            if(headA == headB){
                return headA;
            }
            headA = headA->next;
            headB = headB -> next;
        }
        return NULL;
    }
};
