class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        Node *ptr1 = head, *ptr2 = head;
        while (ptr2->next)
        {
            ptr2 = ptr2->next;
        }
        vector<pair<int, int>> res;
        while (ptr1 != ptr2 && ptr2->next != ptr1)
        {
            int sum = ptr1->data + ptr2->data;

            if (sum == target)
            {
                res.push_back(make_pair(ptr1->data, ptr2->data));
                ptr1 = ptr1->next;
                ptr2 = ptr2->prev;
            }
            else if (sum < target)
            {
                ptr1 = ptr1->next;
            }
            else
            {
                ptr2 = ptr2->prev;
            }
        }
        return res;
    }
};