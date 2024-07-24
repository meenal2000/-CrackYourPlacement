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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *tmphead = head;
        ListNode *prev = NULL;
        while(tmphead)
        {
            if(tmphead->val != val)
            {
                prev = tmphead;
            }
            else
            {
                if(prev)
                    prev->next = prev->next->next;
                else
                {
                    head = head->next;
                }
            }
            tmphead = tmphead -> next;
        }
    
        return head;
    }
};
