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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if (head1 == nullptr && head2) return head2;
        if (head2 == nullptr && head1) return head1;
        if (head1 == nullptr && head2 == nullptr) return nullptr;

        ListNode* dummy = new ListNode(INT_MIN);
        ListNode* curr = dummy;

        while (head1 && head2) {
            if(head1->val <= head2->val) {
                curr->next = head1;
                head1 = head1->next;
            } else {
                curr->next = head2;
                head2 = head2->next;
            }
            curr = curr->next;
        }

        curr->next = head1 ? head1 : head2;   

        return dummy->next;
    }
};