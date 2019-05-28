/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // create new ListNode dumbHead starting with 0
        ListNode* dumbHead = new ListNode{0};
        // create three pointers to l1, l2, and dumbHead
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* curr = dumbHead;
        // create two integers meaning the sum and carry
        int sum = 0;
        int carry = 0;
        // iterate through l1 and l2
        while(p1 != nullptr || p2 != nullptr){
            // only add the non-null node's value to sum if the other node is empty
            if (p1 == nullptr){
                sum = p2->val + carry;
            } else if (p2 == nullptr){
                sum = p1->val + carry;
            } else {
                sum = p1->val + p2->val + carry;
            }
            // get new carry
            if(sum >= 10){
                carry = 1;
            } else {
                carry = 0;
            }
            // create a new node containing sum%10
            curr->next = new ListNode{sum%10};
            // p1, p2, curr go to next node if not null
            if(p1 != nullptr){
                p1 = p1->next;
            }
            if (p2 != nullptr){
                p2 = p2->next;
            }
            curr = curr->next;
        }
        // if carry is equal to end after the loop, create a new node with value 1
        if(carry == 1) curr->next = new ListNode{1};
        return dumbHead->next;
    }
};
