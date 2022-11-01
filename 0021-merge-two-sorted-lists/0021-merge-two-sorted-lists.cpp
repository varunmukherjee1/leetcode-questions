class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* ans;
        ListNode* res;

        if(!list1){
            return list2;
        }

        if(!list2){
            return list1;
        }

        if(list1->val < list2->val){
            res = list1;
            ans = list1;
            list1 = list1->next;
        }
        else{
            res = list2;
            ans = list2;
            list2 = list2->next;
        }


        while(list1 && list2){
            if(list1->val < list2->val){
                res->next = list1;
                list1 = list1->next;
            }
            else{
                res->next = list2;
                list2 = list2->next;
            }

            res = res->next;
        }

        while(list1){
            res->next = list1;
            list1 = list1->next;
            res = res->next;
        }

        while(list2){
            res->next = list2;
            list2 = list2->next;
            res = res->next;
        }

        return ans;
    }
};