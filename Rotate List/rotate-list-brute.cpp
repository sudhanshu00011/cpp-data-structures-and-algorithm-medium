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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        if(head == NULL || head->next == NULL || k == 0) return head;
        int cnt=1;
        while (temp->next) {
            cnt++;
            temp=temp->next;
        }
        ListNode* dummy=head;
        while (k>cnt) k=k-cnt;
        if (cnt==k) return head;
        int n=cnt-k;
        while (dummy) {
            if (n==1) {
                ListNode* ans=dummy->next;
                dummy->next=nullptr;
                temp->next=head;
                return ans;
            }
            n--;
            dummy=dummy->next;
        }
        return head;
    }
};
