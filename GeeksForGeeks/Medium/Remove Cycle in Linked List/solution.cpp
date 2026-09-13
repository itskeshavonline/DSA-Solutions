/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (fast == slow) {
                break;
            }
        }  
        
        if (fast != slow) return;
        
        slow = head;
        
        // Special edge case where the loop starts at the HEAD
        if (slow == fast) {
            while (fast->next != slow) {
                fast = fast->next;
            }
            fast->next = nullptr;
            return;
        }
        
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        
        fast->next = nullptr;
        return;
    }
};