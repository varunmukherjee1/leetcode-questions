
// Definition for singly-linked list.

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:

    ListNode* reverseList(ListNode* head) {

        if(head == NULL || head->next == NULL){
            return head;
        }  

        ListNode* n1 = NULL;
        ListNode* n2 = head; 
        ListNode* n3 = head;   

        while(n2 != NULL){

            n3 = n3->next;
            n2->next = n1;

            ListNode* temp = n2;
            n1 = temp;
            n2 = n3;           
        }

        return n1;  
    }
};