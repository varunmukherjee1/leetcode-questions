#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:

    ListNode *detectCycle(ListNode *head) {

        if(head == NULL){
            return head;
        }
        
        ListNode* fast = head;
        ListNode* slow = head;

        bool found = false;

        while(fast != NULL && fast->next != NULL){

            fast = fast->next->next;
            slow = slow->next;

            if(fast == slow){
                found = true;
                break;
            }
        }

        if(found){

            fast = head;

            while(fast != slow){
                fast = fast->next;
                slow = slow->next;
            }

            return fast;
        }

        return NULL;
    }
};