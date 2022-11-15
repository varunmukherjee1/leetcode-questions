class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(!head || !head->next)
            return head;

        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* temp;

        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }
};