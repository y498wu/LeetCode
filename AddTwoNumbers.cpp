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
        unsigned int first = 0;
        unsigned int second = 0;
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
            second += l2->val * pow(10, digit);
            l2 = l2->next;
            ++digit;
        }
        unsigned int result = first + second;
        // get the reverse digits of result
        int rem = 0;
        rem = result % 10;
        ListNode* resultNode = new ListNode{rem};
        result /= 10;
        ListNode* currentNode = resultNode;
        while (result != 0){
            rem = result % 10;
            result /= 10;
            ListNode* newNode = new ListNode{rem};
            currentNode->next = newNode;
            currentNode = currentNode->next;
        }
        return resultNode;
    }
};
