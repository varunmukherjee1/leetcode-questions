#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL)
            return list2;
        
        if(list2 == NULL)
            return list1;

        ListNode *head = list1;

        if(list2->val < list1->val){
            head = list2;
            list2 = list2->next;
        }
        else{
            list1 = list1->next;
        }

        ListNode* ptr = head;

        while(list1 && list2){
            if(list1->val <= list2->val){
                ptr->next = list1;
                list1 = list1->next;
                ptr = ptr->next;
            }
            else{
                ptr->next = list2;
                list2 = list2->next;
                ptr = ptr->next;
            }
        }

        while(list1){
            ptr->next = list1;
            list1 = list1->next;
            ptr = ptr->next;
        }

        while(list2){
            ptr->next = list2;
            list2 = list2->next;
            ptr = ptr->next;
        }

        return head;        
    }
};