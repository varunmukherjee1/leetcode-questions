
// Definition for singly-linked list.

public class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}
 
class Solution {

    int helper(ListNode head , int n){

        if(head == null){
            return 0;
        }

        int count = helper(head.next,n);

        if(count == n){
            head.next = head.next.next;
        }

        return 1 + count;
    }

    public ListNode removeNthFromEnd(ListNode head, int n) {
        
        int t = helper(head,n);

        if(t == n){
            return head.next;
        }

        return head;
    }
}