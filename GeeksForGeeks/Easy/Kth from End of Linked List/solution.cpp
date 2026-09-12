/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        if (head == nullptr) return -1;
        
        int count = 0;
        Node* curr = head;
        Node* temp = head;
        while (curr != nullptr && count < k) {
            curr = curr->next;
            count++;
        }
        
        while (curr != nullptr) {
            curr = curr->next;
            temp = temp->next;
        }
        
        int kVal = (count == k) ? temp->data : -1;
        return kVal;
        
    }
};