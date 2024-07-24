bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        // reverse first half
        ListNode *curr = slow, *pre = NULL, *post = NULL;
        while(curr)
        {
            post = curr->next;
            curr->next = pre;
            pre = curr;
            curr = post;
        }
        while(pre && head)
        {
           // cout << pre->val << " " << slow->val << "\n";
            if(pre->val != head->val)
                return false;
            pre = pre->next;
            head = head->next;
        }
        return true;

    }
