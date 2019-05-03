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
        ListNode* dummyHead = new ListNode{0};
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* curr = dummyHead;
        int carry = 0;
        int x, y;
        while (p || q){
            (p != nullptr) ? x = p->val : x = 0;
            (q != nullptr) ? y = q->val : y = 0;
            int sum = carry + x + y;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            if (p != nullptr) p = p->next;
            if (q != nullptr) q = q->next;
        }
        if (carry > 0) {
            curr->next = new ListNode(carry);
        }
        return dummyHead->next;
    }
};