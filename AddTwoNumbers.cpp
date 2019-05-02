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
        int first = 0;
        int second = 0;
        // when l1 is NOT empty
        int digit = 0;
        while(l1){
            first += l1->val * pow(10, digit);
            l1 = l1->next;
            ++digit;
        }
        // reset digit
        digit = 0;
        // go thru l2
        while(l2){
            first += l2->val * pow(10, digit);
            l2 = l2->next;
            ++digit;
        }
        int result = first + second;
        // get the reverse digits of result
        ListNode* resultNode;
        int rem;
        while (result != 0){
            rem = result % 10;
            resultNode->val = rem;
            result /= 10;
            resultNode = resultNode->next;
        }
        return resultNode;
    }
};