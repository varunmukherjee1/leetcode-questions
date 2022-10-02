#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:

    int calcLen(ListNode* head){
        if(head == NULL){
            return 0;
        }

        return 1 + calcLen(head->next);
    }

    ListNode* findNode(ListNode* head , int id){

        if(id == 1){
            return head;
        }

        return findNode(head->next,id-1);
    }

    ListNode* middleNode(ListNode* head) {

        // O(2*n)

        // if(head == NULL)    return NULL;
        
        // int len = calcLen(head);

        // return findNode(head, (int)(len/2) + 1);

        // O(n)

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    
};