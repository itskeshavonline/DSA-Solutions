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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;

        while(curr != nullptr) {
            if(curr->val == prev->val && prev != dummy) {
                ListNode* remove = curr;
                curr = curr->next;
                prev->next = curr;

                delete remove;
            } else {
                prev = prev->next;
                curr = curr->next;
            }
        }

        delete dummy;
        return head;
    }
};