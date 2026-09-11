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
    int getDecimalValue(ListNode* head) {
        if(head == nullptr) return 0;
        
        int num = head->val;
        head = head->next;

        while(head != nullptr) {
            if(head->val == 1) {
                num <<=1;
                num++;
            } else {
                num <<=1;
            }
            head = head->next;
        }

        return num;
    }
};