//construct a DLL from array
class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* temp = head;
        head -> prev = NULL;
        
        for(int i = 1; i<arr.size(); i++){
            Node* curr = new Node(arr[i]);
            temp -> next = curr;
            curr -> prev = temp;
            temp = temp -> next;
        }
        return head;
    }
};