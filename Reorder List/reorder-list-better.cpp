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
    void reorderList(ListNode* head) {
        vector<int> arr;
        ListNode* curr = head;
        while (curr) {
            arr.push_back(curr->val);
            curr = curr->next;
        }
        int i = 0, j = arr.size() - 1;
        curr = head;
        while (i <= j) {
            curr->val = arr[i++];
            curr = curr->next;
            if (i <= j) {
                curr->val = arr[j--];
                curr = curr->next;
            }
        }
    }
};
