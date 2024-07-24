ListNode* sortList(ListNode* head) {
        // 0/1 already sorted
        if(!head || !head->next)
            return head;
        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        ListNode* p1 = sortList(head);
        ListNode* p2 = sortList(slow);
        return merge(p1, p2);
    }
    ListNode* merge(ListNode* p1, ListNode* p2)
    {
        ListNode* dummy = new ListNode(0);
        ListNode* head = dummy;
        while(p1 && p2)
        {
            if(p1->val < p2->val)
            {
                head->next = new ListNode(p1->val);
                head = head->next;
                p1 = p1->next;
            }else{
                head->next = new ListNode(p2->val);
                head = head->next;
                p2 = p2->next;
            }
        } 
        while(p1)
        {
            head->next = new ListNode(p1->val);
            head = head->next;
            p1 = p1->next;
        }
        while(p2)
        {
            head->next = new ListNode(p2->val);
            head = head->next;
            p2 = p2->next;
        }
        return dummy->next;
    }
