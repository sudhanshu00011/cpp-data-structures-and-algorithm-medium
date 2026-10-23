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
        for (ListNode* temp = head; temp; temp = temp->next) arr.push_back(temp->val);
        vector<int> ans;
        int i = 0, j = arr.size() - 1;
        while (i <= j) {
            ans.push_back(arr[i++]);
            if (i <= j) ans.push_back(arr[j--]);
        }
        ListNode* temp = head;
        for (int x : ans) {
            temp->val = x;
            temp = temp->next;
        }
    }
};
