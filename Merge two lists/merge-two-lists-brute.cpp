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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

            // Create a dummy node
            ListNode* dummy = new ListNode(-1);

            // tail will always point to the last node
            ListNode* tail = dummy;

            // Compare both lists
            while (list1 != NULL && list2 != NULL) {

                if (list1->val <= list2->val) {
                    tail->next = list1;      // Attach list1 node
                    list1 = list1->next;     // Move list1 forward
                }
                else {
                    tail->next = list2;      // Attach list2 node
                    list2 = list2->next;     // Move list2 forward
                }

                tail = tail->next;           // Move tail
            }

            // Attach the remaining nodes
            if (list1 != NULL)
                tail->next = list1;

            if (list2 != NULL)
                tail->next = list2;

            // Return merged list
            return dummy->next;
        }
    };
