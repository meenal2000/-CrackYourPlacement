/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode *head , ListNode *newHead)
    {
        if(!head)
            return newHead;
        ListNode *Nextnode = head->next;
        head -> next = newHead;
        return reverse(Nextnode , head);
    }
    int getDecimalValue(ListNode* head) {
        ListNode *h1 = reverse(head , NULL);
        int ans = 0;
        int bit = 0;
        while(h1)
        {
            //cout << h1->val << " ";
            if(h1 -> val)
                ans += pow(2,bit);
            ++bit;
            h1 = h1->next;
        }
        return ans;
    }
};
