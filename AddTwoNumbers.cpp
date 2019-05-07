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
        int carry = 0;/**
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
        ListNode* dumbHead = new ListNode{0};
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        ListNode* curr = dumbHead;
        int carry = 0;
        int result = 0;
        while(cur1 != nullptr || cur2 != nullptr){
            if (cur1 == nullptr){
                result = cur2->val;
            } else if (cur2 == nullptr){
                result = cur1->val;
            } else {
                result = cur1->val + cur2->val;
            }
            if (carry == 1) result++;
            if (result >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }
            curr->next = new ListNode{result%10};
            if(cur1 != nullptr) cur1 = cur1->next;
            if(cur2 != nullptr) cur2 = cur2->next;
            curr = curr->next;
        }
        if (carry == 1) curr->next = new ListNode{1};
        return dumbHead->next;
    }
};
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
