// will not run for large linked lists
// 1565 / 1569 testcases passed in leetcode
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long sum1=0;
        long long mul1=1;
        ListNode* temp1 = l1;
        while (temp1 != NULL) {
            sum1+= mul1*(temp1->val);
            temp1 = temp1 -> next;
            mul1*=10;
        }
        long long sum2=0;
        long long mul2=1;
        ListNode* temp2 = l2;
        while (temp2 != NULL) {
            sum2+= mul2*(temp2->val);
            temp2 = temp2 -> next;
            mul2*=10;
        }
        long long sum = sum1+sum2;
        if (sum == 0) return new ListNode(0);
        ListNode* head= new ListNode(sum%10);
        sum/=10;
        ListNode* temp = head;
        while (sum != 0) {
            temp->next = new ListNode(sum % 10);
            temp =temp->next;
            sum/=10;
        }
        return head;
    }
};
