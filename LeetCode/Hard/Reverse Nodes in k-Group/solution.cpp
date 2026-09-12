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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        bool isFirstPass = true;
        ListNode* firstPrev = nullptr;// used to link reversed LLs
        ListNode* first = curr;// first goes to end after reversal

        while(curr != nullptr) {
            ListNode* prev = nullptr;// comes at first after reversal
            int count = 0;

            while (curr != nullptr && count < k) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;

                count++;
            } 

            if (count < k) {
                curr = prev;
                prev = nullptr;
                for(int i=0; i<count; i++) {
                    ListNode* next = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = next;
                }
            }

            if(isFirstPass) {
                head = prev;
                isFirstPass = false;
            } else {
                firstPrev->next = prev;
            }
            
            firstPrev = first;
            first = curr;
        }

        return head;
    }
};