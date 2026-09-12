class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // a temporary dummy node pointing to head
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr) {
            if (curr->val == val) {
                
                prev->next = curr->next;
                delete curr;
        
                curr = prev->next; 
            } else {
                // Only advance prev if we DID NOT delete a node
                prev = curr;
                curr = curr->next;
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        
        return newHead;
    }
};
